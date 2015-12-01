 /*
 * This file implements ADC init and conversion based on received command
 */

#ifndef STM_EMSYS_STEPPER_H
#define STM_EMSYS_STEPPER_H

#include <stdio.h>
#include <stdint.h>
#include "stm32f3xx_hal.h"
#include "stm32f3_discovery.h"

#include "common.h"

/*define this macro for full step or else halfstep*/
#define STEPPER_FULL_STEP	1

#define STEPPER_ERR	-1
#define STEPPER_OK	0

/*timer 100Khz prescaler*/ 
#define TIM1_100KHZ	1440

/*API to initialize stepper*/
int8_t initStepper();

/*API to activate stepper*/
int8_t activateStepper(int32_t steps, uint32_t delay);

#endif
