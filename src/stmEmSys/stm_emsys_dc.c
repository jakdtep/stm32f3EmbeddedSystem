#include "stm_emsys_dc.h"

/*timer 100Khz prescaler*/ 
#define TIM1_100KHZ	72

/*status to track initialization*/
static int8_t dcMotorInitDone = 0;
/*to track current direction*/
static int8_t dcMotorCurDir = 1;
/*to track current speed*/
static int16_t dcMotorCurSpeed = 0;
static int16_t dcMotorSetSpeed = 0;
/*to track running status*/
static int8_t dcMotorIsRunning = 0;

static ADC_HandleTypeDef handleADC;
static ADC_ChannelConfTypeDef dcMotorAdcChConfig1;

/*gpio pins used for dc motor direction control*/
static uint32_t gpiosDcMotorDirPC[2] = {GPIO_PIN_0, GPIO_PIN_1}; 
/*gpio pins used for dc motor tachometer*/
static uint32_t gpiosDcMotorTachoPB[2] = {GPIO_PIN_0, GPIO_PIN_13}; 
/*gpio pins for pwm speed control*/
static uint32_t gpiosDcMotorPwmPB = GPIO_PIN_14; 

/*init timer block*/
void initPwmTIM1(uint32_t prescale)
{
	__TIM15_CLK_ENABLE();
	TIM15->PSC = prescale;
	TIM15->ARR = DCMOTOR_MAX_SPEED; 
	TIM15->CR1 |= (1<<7);
	TIM15->CCMR1 = 0b01101000;
	TIM15->EGR |= 0b11100010;
	TIM15->BDTR |= (1<<15);
	TIM15->CCER = 0x1;

}


/*init dc motor direction gpios on portC*/
int8_t initDcMotorDirGpioPC(uint32_t *gpios)
{
	GPIO_InitTypeDef  GPIO_InitStruct;
	/* Configure the GPIO pins for the dc motor direction */
	/*enable port c gpio clock*/
	__GPIOC_CLK_ENABLE();
	/*enable all 2 stepper gpios*/
	GPIO_InitStruct.Pin       = gpios[0] | gpios[1];
	/*set gpios as output with no pull ups*/
	GPIO_InitStruct.Mode      = GPIO_MODE_OUTPUT_PP;
	GPIO_InitStruct.Pull      = GPIO_NOPULL;
	GPIO_InitStruct.Speed     = GPIO_SPEED_HIGH;
	GPIO_InitStruct.Alternate = 0;
	HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);
	return DCMOTOR_OK;
}
/*init dc motor PWM  gpios on portB*/
int8_t initDcMotorPwmGpioPB(uint32_t gpio)
{
	GPIO_InitTypeDef  GPIO_InitStruct;

	/* Configure the GPIO pins for the dc motor PWM */
	/*enable port B gpio clock*/
	__GPIOB_CLK_ENABLE();
	/*enable  1 pwm gpios*/
	GPIO_InitStruct.Pin       = gpio;
	/*set gpios as output with no pull ups*/
	GPIO_InitStruct.Mode      = GPIO_MODE_AF_PP;
	GPIO_InitStruct.Pull      = GPIO_NOPULL;
	GPIO_InitStruct.Speed     = GPIO_SPEED_HIGH;
	GPIO_InitStruct.Alternate = 1;
	HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

	return DCMOTOR_OK;
}

/*init dc motor Tacho  gpios on portB*/
int8_t initDcMotorTachoGpioPB(uint32_t *gpios)
{
	GPIO_InitTypeDef  GPIO_InitStruct;

	/* Configure the GPIO pins for the dc motor PWM */
	/*enable port B gpio clock*/
	__GPIOB_CLK_ENABLE();
	/*enable  1 pwm gpios*/
	GPIO_InitStruct.Pin       = gpios[0] | gpios[1]; 
	/*set gpios as output with no pull ups*/
	GPIO_InitStruct.Mode      = GPIO_MODE_ANALOG;
	GPIO_InitStruct.Pull      = GPIO_NOPULL;
	GPIO_InitStruct.Speed     = GPIO_SPEED_HIGH;
	GPIO_InitStruct.Alternate = 0;
	HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);
	return DCMOTOR_OK;
}

/*initialize the ADC module and congifure the channels*/
uint8_t initDcMotorTachoAdcPB()
{
	HAL_StatusTypeDef ret;

	/*enable ADC clock*/
	__ADC34_CLK_ENABLE();
	/*(optional) clock*/
	__HAL_RCC_ADC34_CONFIG(RCC_ADC34PLLCLK_DIV1);  	
	/* Initialize ADC1 for PA0-PA3*/
	handleADC.Instance = ADC3;
	/*choose required adc parameters*/
	handleADC.Init.ClockPrescaler = ADC_CLOCK_SYNC_PCLK_DIV1;
	/*select 12bit resolution*/
	handleADC.Init.Resolution = ADC_RESOLUTION12b;
	/*align MSB to right*/
	handleADC.Init.DataAlign = ADC_DATAALIGN_RIGHT;
	/*restrict conversion to single not continuous*/	
	handleADC.Init.ScanConvMode = ADC_SCAN_DISABLE;
	/*single polling conversion*/
	handleADC.Init.EOCSelection = EOC_SINGLE_CONV;

	/*do only one conversion and stop*/
	handleADC.Init.ContinuousConvMode = DISABLE;
	/*number of conversions = 1 in single mode*/
	handleADC.Init.NbrOfConversion = 1;
	/*related to continous conversion. so disabled*/
	handleADC.Init.DiscontinuousConvMode = DISABLE;
	/*related to continous conversion. so disabled*/
	handleADC.Init.NbrOfDiscConversion = 0;
	/*set trigger to software event*/
	handleADC.Init.ExternalTrigConv = ADC_SOFTWARE_START;
	/*edge of trigger. NA for software trigger*/
	handleADC.Init.ExternalTrigConvEdge = 0;
	/*single converiosn mode. so NA */
	handleADC.Init.DMAContinuousRequests = DISABLE;
	/*overwrite the previous data in case of overrun*/
	handleADC.Init.Overrun = OVR_DATA_OVERWRITTEN;
	/*feature looks unwanted. so keeping disabled*/
	handleADC.Init.LowPowerAutoWait = DISABLE;

	ret = HAL_ADC_Init(&handleADC);

	if(HAL_OK != ret)
		printf("ADC init for PB0, PB13 failed\n");

	/* setup the requested channel */
	dcMotorAdcChConfig1.Channel = DCMOTOR_TACHO_CH;
	dcMotorAdcChConfig1.Rank = 1;
	/*choose a conversion rate 19.5 adc cycles*/	
	dcMotorAdcChConfig1.SamplingTime = ADC_SAMPLETIME_19CYCLES_5;
	/*choose single reference mode*/
	dcMotorAdcChConfig1.SingleDiff = ADC_SINGLE_ENDED;
	/*do not add any offset*/
	dcMotorAdcChConfig1.OffsetNumber = ADC_OFFSET_NONE;
	/*no offset to be added to raw adc value*/
	dcMotorAdcChConfig1.Offset = 0;
	/*configure the channel with above params*/
	ret = HAL_ADC_ConfigChannel(&handleADC, &dcMotorAdcChConfig1);

	if(ret != HAL_OK) 
	{
		printf("ADC channel dcMotorAdcChConfig1ure failed\n");
		return DCMOTOR_ERR;
	}
	return DCMOTOR_OK;
}

/*read the already initialized ADC*/
uint16_t sampleDcMotorTacho(uint8_t ch)
{
	HAL_StatusTypeDef ret;
	/* Start the ADC */
	ret = HAL_ADC_Start(&handleADC);
	if(ret != HAL_OK) 
	{
		printf("ADC start failed\n");
		return DCMOTOR_ERR;
	}

	/* wait till end of conversion timeout 50ms */
	ret = HAL_ADC_PollForConversion(&handleADC, 50);

	if(ret != HAL_OK) 
	{
		printf("wait for conversion failed\n");
		return DCMOTOR_ERR;
	}

	/* get the ADC values after successful conversion*/
	return HAL_ADC_GetValue(&handleADC);

}

/*set dc motor direction gpios on portC*/
int8_t setDirDcMotorPC(int32_t speed, uint32_t *gpios)
{
	/*choose reverse or forward*/
	if(speed < 0)
	{
		printf("DC motor Reverse\n");
		/*Write 1A & 2A pins*/
		HAL_GPIO_WritePin(GPIOC, gpios[0], 1);
		HAL_GPIO_WritePin(GPIOC, gpios[1], 0);
		/*get absolute speed*/
		speed = -speed;
		dcMotorCurDir = -1;
	}else
	{
		printf("DC motor forward\n");
		HAL_GPIO_WritePin(GPIOC, gpios[0], 0);
		HAL_GPIO_WritePin(GPIOC, gpios[1], 1);
		dcMotorCurDir = 1;
	}
	return DCMOTOR_OK;
}
/*set dc motor speed PWM  portB*/
int8_t setSpeedDcMotorPB(int32_t speed, uint32_t gpio)
{

	//HAL_GPIO_WritePin(GPIOB, gpio, 1);
	speed = speed<0?-speed:speed;

	speed = speed<DCMOTOR_MIN_SPEED?DCMOTOR_MIN_SPEED:speed;
	speed = speed>DCMOTOR_MAX_SPEED?DCMOTOR_MAX_SPEED:speed;

	TIM15->BDTR |= (1<<15);
	TIM15->CCR1 = speed;
	TIM15->CR1 |= 1;
	dcMotorCurSpeed = speed;
	dcMotorIsRunning = 1;

//	printf("DC motor set speed %d\n", (int)speed);
	return DCMOTOR_OK;
}
/*turn dc motor off  portB*/
int8_t stopDcMotorPB(uint32_t gpio)
{
	printf("DC motor stop\n");

	//TIM15->BDTR &= ~(1<<15);
	TIM15->CCR1 = 0;
	TIM15->CR1 &= ~1;
	dcMotorCurSpeed = 0;
	dcMotorIsRunning = 0;
	return DCMOTOR_OK;
}

/*funtion to update dcmotor speed in closed loop
  to be called from timer interrupt*/
void updateDcMotorSpeed()
{
	int16_t tacho1 = 0, calcSpeed = 0;
	int16_t	 delta = 0;
	/*skip if dcmotor is not running*/
	if(!dcMotorIsRunning)
		return;

	tacho1 = sampleDcMotorTacho(0);
	calcSpeed = (tacho1 + DCMOTOR_ADC2SPEED_C) / DCMOTOR_ADC2SPEED_M;
	delta = dcMotorSetSpeed - calcSpeed;
//	printf("tacho=%d, calcSpeed=%d, curSpeed=%d, delta=%d\n", tacho1, calcSpeed, dcMotorCurSpeed, delta);
	if(delta >= DCMOTOR_RESPOND_DELTA)
		setSpeedDcMotorPB(dcMotorCurSpeed + DCMOTOR_SPEED_STEP, gpiosDcMotorPwmPB);
	else if(delta < -DCMOTOR_RESPOND_DELTA)
		setSpeedDcMotorPB(dcMotorCurSpeed - DCMOTOR_SPEED_STEP, gpiosDcMotorPwmPB);
}

int8_t initDcMotorControl()
{
	initDcMotorDirGpioPC(gpiosDcMotorDirPC);
	initDcMotorPwmGpioPB(gpiosDcMotorPwmPB);
	initDcMotorTachoGpioPB(gpiosDcMotorTachoPB);
	initPwmTIM1(TIM1_100KHZ);
	initDcMotorTachoAdcPB();
	return  DCMOTOR_OK;
}

void startDcMotor( uint32_t cmdArg1, int32_t cmdArg2, uint16_t adc)
{

	/*make sure stepper init is done once*/
	if(!dcMotorInitDone)
	{
		initDcMotorControl();
		dcMotorInitDone = 1;
		printf("DC motor control init done!\n");
	}
	/*set direction DC motor*/
	if(setDirDcMotorPC(cmdArg2, gpiosDcMotorDirPC) != DCMOTOR_OK)
		printf("set dir error\n");
	else
		printf("Set dir Success!!\n");

	dcMotorSetSpeed = cmdArg2<0?-cmdArg2:cmdArg2;
	if(setSpeedDcMotorPB(cmdArg2, gpiosDcMotorPwmPB) != DCMOTOR_OK)
		printf("set speed error\n");
	else
		printf("Set speed Success!!\n");

	adc = sampleDcMotorTacho(DCMOTOR_TACHO_CH);
	printf("Tacho %d\n", (unsigned)adc);

	//printf("calculated speed=%d\n", (int)((adc + DCMOTOR_ADC2SPEED_C) / DCMOTOR_ADC2SPEED_M));
}
