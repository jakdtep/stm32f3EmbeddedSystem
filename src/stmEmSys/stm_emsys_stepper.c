/*stepper.c 
 *
 * This file implements unipolar stepper motor interfacing in full step and halfstep
 */

#include "stm_emsys_stepper.h"

/*link the varibale to timer interrupt*/
extern uint32_t myTickCount;
/*status to track initialization*/
static int8_t stepperInitDone = 0;

/*status variables for stepper 1*/
static uint32_t stepper1Step, stepper1Steps, stepper1Start;
static uint32_t stepper1Delay, stepper1Timer;
static uint8_t *pStepper1StepSeq = NULL;
static uint8_t stepper1 = NULL;

/*gpio pins used Stepper poles are in ACBD order*/
static uint32_t gpiosPC[4] = {GPIO_PIN_6, GPIO_PIN_8, 
	GPIO_PIN_7,GPIO_PIN_9};

#ifdef STEPPER_FULL_STEP
/*0011 3
0110 6
1100 12
1001 0*/
/*forward & reverse tables*/
static uint8_t stepsFull[2][4] = {{3, 6, 12, 9},
/*reverse table*/		{9, 12, 6, 3}};
#define stepSeq		stepsFull
#else
/*0001 1
0011 3
0010 2
0110 6
0100 4
1100 12
1000 8
1001 9*/
/*forward table*/
static uint8_t stepsHalf[2][4] = {{1, 3, 2, 6, 4, 12, 8, 9},
/*reverse table*/ 		{9, 8, 12, 4, 6, 2, 3, 1}};
#define stepSeq		stepsHalf
#endif

/*to track current step of the motor*/
static uint32_t curStep1 = 0;

int8_t initStepperGpioPortC(uint32_t *gpios)
{
	GPIO_InitTypeDef  GPIO_InitStruct;
	/* Configure the GPIO pins for the stepper */
	/*enable port c gpio clock*/
	__GPIOC_CLK_ENABLE();
	/*enable all 4 stepper gpios*/
	GPIO_InitStruct.Pin       = gpios[0] | gpios[1] | gpios[2] | gpios[3];
	/*set gpios as output with no pull ups*/
	GPIO_InitStruct.Mode      = GPIO_MODE_OUTPUT_PP;
	GPIO_InitStruct.Pull      = GPIO_NOPULL;
	GPIO_InitStruct.Speed     = GPIO_SPEED_HIGH;
	GPIO_InitStruct.Alternate = 0;
	HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);
	return STEPPER_OK;
}

int8_t activateStepper(int32_t steps, uint32_t delay)
{
	/*make sure stepper init is done once*/
	if(!stepperInitDone)
	{
		initStepper();
		stepperInitDone = 1;
		printf("Stepper init done!\n");
	}
	
	/*choose reverse or forward step sequence*/
	if(steps < 0)
	{
		printf("sending reverse sequence\n");
		pStepper1StepSeq = stepSeq[1];
		/*get absolute of steps for looping*/
		stepper1Step = -steps;
	}else
	{
		printf("sending forward sequence\n");
		pStepper1StepSeq = stepSeq[0];
	}
	stepper1Steps = steps;
	/*start from previously stopped position*/
	stepper1Start = stepper1Step = curStep1;
	stepper1 = STEPPER_ON;
	stepper1Delay = delay;
	return  STEPPER_OK;
}

void stepperSendNextStep(uint8_t stepperNo)
{
	if(stepperNo == STEPPER1)
	{
		if(stepper1Step < (stepper1Steps + stepper1Start))
		{
#ifdef STEPPER_FULL_STEP
			curStep1 = stepper1Step & 3;
#else
			curStep1 = stepper1Step & 7;
#endif
			//printf("writting step %d, val = %d\n", 
		   //			(unsigned)curStep1, (unsigned)pStepper1StepSeq[curStep1]);
			/*test each bit and write to gpio*/
			HAL_GPIO_WritePin(GPIOC, gpiosPC[0], 
					pStepper1StepSeq[curStep1]&1?1:0);
			HAL_GPIO_WritePin(GPIOC, gpiosPC[1], 
					pStepper1StepSeq[curStep1]&2?1:0);
			HAL_GPIO_WritePin(GPIOC, gpiosPC[2], 
					pStepper1StepSeq[curStep1]&4?1:0);
			HAL_GPIO_WritePin(GPIOC, gpiosPC[3], 
					pStepper1StepSeq[curStep1]&8?1:0);
			stepper1Step++;
		}
		/*turn of stepper*/
		else
		{
		    printf("Turning Stepper%d OFF\n", stepperNo);
			stepper1 = STEPPER_OFF;
			stepper1Timer = 0;
			stepper1Delay = 0;
			stepper1Steps = 0;
			stepper1Step = 0;
			/*reset all gpio to deactivate all coils*/
			HAL_GPIO_WritePin(GPIOC, gpiosPC[0], 0);
			HAL_GPIO_WritePin(GPIOC, gpiosPC[1], 0);
			HAL_GPIO_WritePin(GPIOC, gpiosPC[2], 0);
			HAL_GPIO_WritePin(GPIOC, gpiosPC[3], 0);
			
		}
	}
}


int8_t initStepper()
{
	initStepperGpioPortC(gpiosPC);
	return  STEPPER_OK;
}

/*API to trigger stepper from timer interrupt*/
void triggerStepper()
{
	/*check if stepper1 is ON*/
	if(stepper1 == STEPPER_ON)
	{
		if(!stepper1Timer)
		{
			stepper1Timer = myTickCount + stepper1Delay;
		}else if(myTickCount >= stepper1Timer)
		{
			stepperSendNextStep(STEPPER1);
			stepper1Timer = myTickCount + stepper1Delay;
		}
	}
}

