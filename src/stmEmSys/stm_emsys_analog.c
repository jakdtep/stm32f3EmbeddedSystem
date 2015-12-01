/* 
 *
 * This file implements ADC init and conversion based on received command
 */

#include "stm_emsys_analog.h"

static ADC_HandleTypeDef handleADC;

void initAdcPortA()
{
	HAL_StatusTypeDef ret;
	GPIO_InitTypeDef  GPIO_InitStruct;
	/* enable clock for port A */
	__GPIOA_CLK_ENABLE();
	/*use 3 gpios in port A*/
	GPIO_InitStruct.Pin       = GPIO_PIN_1 |GPIO_PIN_2 | GPIO_PIN_3;
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

