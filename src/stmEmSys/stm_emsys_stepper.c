/*stepper.c 
 *
 * This file implements unipolar stepper motor interfacing in full step and halfstep
 */

#include "stm_emsys_stepper.h"

/*status to track initialization*/
static int8_t stepperInitDone = 0;

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
static uint32_t curStep = 0;
/*init timer block*/
void initTIM1(uint32_t prescale)
{
	__TIM1_CLK_ENABLE();
	TIM1->PSC = prescale;
	TIM1->CR1 = 0x1;
}

/*poll and wait till timer expired*/
void pollWaitMsTIM1(uint16_t delayMs)
{
	uint32_t counter = (delayMs*40);
	TIM1->CNT = 0;
//	printf("counter is at %d, %d\n", (unsigned) TIM1->CNT, (unsigned)counter);
	while(TIM1->CNT < counter)
		asm volatile("nop\n");
}


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
	/*loop step times*/
	uint32_t step, start = curStep;
	uint8_t *pTempStepSeq = NULL;
	
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
		pTempStepSeq = stepSeq[1];
		/*get absolute of steps for looping*/
		steps = -steps;
	}else
	{
		printf("sending forward sequence\n");
		pTempStepSeq = stepSeq[0];
	}
	for(step=start; step<(steps+start); step++)
	{
#ifdef STEPPER_FULL_STEP
		curStep = step & 3;
#else
		curStep = step & 7;
#endif
		printf("writting step %d, val = %d\n", 
				(unsigned)curStep, (unsigned)pTempStepSeq[curStep]);
		/*test each bit and write to gpio*/
		HAL_GPIO_WritePin(GPIOC, gpiosPC[0], 
				pTempStepSeq[curStep]&1?1:0);
		HAL_GPIO_WritePin(GPIOC, gpiosPC[1], 
				pTempStepSeq[curStep]&2?1:0);
		HAL_GPIO_WritePin(GPIOC, gpiosPC[2], 
				pTempStepSeq[curStep]&4?1:0);
		HAL_GPIO_WritePin(GPIOC, gpiosPC[3], 
				pTempStepSeq[curStep]&8?1:0);
		/*wait delay Milli seconds bw each step*/
		pollWaitMsTIM1(delay);
	}
	/*reset all gpio to deactivate all coils*/
	HAL_GPIO_WritePin(GPIOC, gpiosPC[0], 0);
	HAL_GPIO_WritePin(GPIOC, gpiosPC[1], 0);
	HAL_GPIO_WritePin(GPIOC, gpiosPC[2], 0);
	HAL_GPIO_WritePin(GPIOC, gpiosPC[3], 0);
		/*wait delay Milli seconds bw each step*/
	return  STEPPER_OK;
}

int8_t initStepper()
{
	initTIM1(TIM1_100KHZ);
	initStepperGpioPortC(gpiosPC);
	return  STEPPER_OK;
}
