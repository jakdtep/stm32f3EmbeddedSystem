 /*
 * This file implements ADC init and conversion based on received command
 */

#ifndef STM_EMSYS_ANALOG_H
#define STM_EMSYS_ANALOG_H

#include <stdio.h>
#include <stdint.h>
#include "stm32f3xx_hal.h"
#include "stm32f3_discovery.h"

#include "common.h"

#define ADC_OK		0
#define ADC_ERR		-1

/*API to initialize ADC*/
void initAdcPortA();

/*API to read from specified channel*/
int16_t readAdcPortA(uint8_t chNo);

/*API to set the DAC output*/
void writeDacPortA(uint16_t dacVal);

#endif
