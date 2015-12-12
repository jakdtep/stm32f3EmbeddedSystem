/* 
 *
 * This file implements ADC init and conversion based on received command
 */

#include "stm_emsys_analog.h"

static ADC_HandleTypeDef handleADC;

/*dac waveform table*/
extern volatile uint32_t myTickCount;
static uint16_t trigWaveTb[] = {0, 512, 1024, 2048, 4095, 2048, 1024, 512};
static uint32_t trigWaveStep = 0; 
static uint32_t trigWaveDelay = 0;

void initAdcPortA()
{
	HAL_StatusTypeDef ret;
	GPIO_InitTypeDef  GPIO_InitStruct;
	/* enable clock for port A */
	__GPIOA_CLK_ENABLE();
	/*use 3 gpios in port A*/
	GPIO_InitStruct.Pin       = GPIO_PIN_1 |GPIO_PIN_2 | GPIO_PIN_3 | GPIO_PIN_4; 
	/*choose analog mode; additional function*/
	GPIO_InitStruct.Mode      = GPIO_MODE_ANALOG;
	GPIO_InitStruct.Pull      = GPIO_NOPULL;
	GPIO_InitStruct.Speed     = GPIO_SPEED_HIGH;
	/*ADC not part of alternate funcions. hence zero*/
	GPIO_InitStruct.Alternate = 0;
	HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);
	
	/* enable clock for port F */
	__GPIOF_CLK_ENABLE();
	/*use gpio 4 in port F*/
	GPIO_InitStruct.Pin       = GPIO_PIN_4;
	/*choose analog mode; additional function*/
	GPIO_InitStruct.Mode      = GPIO_MODE_ANALOG;
	GPIO_InitStruct.Pull      = GPIO_NOPULL;
	GPIO_InitStruct.Speed     = GPIO_SPEED_HIGH;
	/*ADC not part of alternate funcions. hence zero*/
	GPIO_InitStruct.Alternate = 0;
	HAL_GPIO_Init(GPIOF, &GPIO_InitStruct);
	
	/*enable ADC clock*/
	__ADC1_CLK_ENABLE();
	/*(optional) clock*/
	__HAL_RCC_ADC12_CONFIG(RCC_ADC12PLLCLK_DIV1);  	
	/* Initialize ADC1 for PA0-PA3*/
	handleADC.Instance = ADC1;
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
		printf("ADC init for PA0-PA4 failed\n");

	/*enable the DAC module*/
	__DAC1_CLK_ENABLE();
	/*no external trigger enabled (direct conversion mode)*/
	/*buffer enabled*/
	DAC1->CR = 1;
	
}

int16_t readAdcPortA(uint8_t chNo)
{
	ADC_ChannelConfTypeDef adcChConfig;
	HAL_StatusTypeDef ret;

	/* setup the requested channel */
	/*PA0-PA3 -> ch1-ch4*/
	adcChConfig.Channel = chNo;
	adcChConfig.Rank = 1;
       /*choose a conversion rate 19.5 adc cycles*/	
	adcChConfig.SamplingTime = ADC_SAMPLETIME_19CYCLES_5;
	/*choose single reference mode*/
	adcChConfig.SingleDiff = ADC_SINGLE_ENDED;
	/*do not add any offset*/
	adcChConfig.OffsetNumber = ADC_OFFSET_NONE;
	/*no offset to be added to raw adc value*/
	adcChConfig.Offset = 0;
	/*configure the channel with above params*/
	ret = HAL_ADC_ConfigChannel(&handleADC, &adcChConfig);
	
	if(ret != HAL_OK) 
	{
		printf("ADC channel adcChConfigure failed\n");
		return ADC_ERR;
	}

	/* Start the ADC */
	ret = HAL_ADC_Start(&handleADC);
	if(ret != HAL_OK) 
	{
		printf("ADC start failed\n");
		return ADC_ERR;
	}

	/* wait till end of conversion timeout 50ms */
	ret = HAL_ADC_PollForConversion(&handleADC, 50);

	if(ret != HAL_OK) 
	{
		printf("wait for conversion failed\n");
		return ADC_ERR;
	}

	/* get the ADC values after successful conversion*/
	return HAL_ADC_GetValue(&handleADC);

}


void writeDacPortA(uint16_t dacVal)
{
	/*send the dac value to HDR register*/
	DAC->DHR12R1 = dacVal;
}

void trigWaveDacPortA()
{
    if(!trigWaveDelay)
    {
	    trigWaveDelay = myTickCount + DAC_TRIG_WAVE_T;
	    trigWaveStep = 0;
    }else if(myTickCount > trigWaveDelay)
    {
	    writeDacPortA(trigWaveTb[trigWaveStep++ & (DAC_TRIG_WAVE_STEPS-1)]);
	    trigWaveDelay = myTickCount + DAC_TRIG_WAVE_T;
	    //printf("%d\n", (int)lcdPulseStep & (LCD_BL_PULSE_STEPS-1));
    }
}
