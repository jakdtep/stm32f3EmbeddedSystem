/*
This file implements DC Motor init based on received command
*/

#ifndef STM_EMSYS_DC_H
#define STM_EMSYS_DC_H

#include <stdio.h>
#include <stdint.h>
#include "stm32f3xx_hal.h"
#include "stm32f3_discovery.h"

#include "common.h"

#define DCMOTOR_ERR     -1
#define DCMOTOR_OK      0

#define DCMOTOR_TACHO_CH        5

#define DCMOTOR_ADC2SPEED_M             3
#define DCMOTOR_ADC2SPEED_C             100
#define DCMOTOR_RESPOND_DELTA           50
#define DCMOTOR_SPEED_STEP              10
#define DCMOTOR_MIN_SPEED               300
#define DCMOTOR_MAX_SPEED               1000


// API to start DC Motor
void startDcMotor( uint32_t cmdArg1, int32_t cmdArg2, uint16_t adc);

// API to stop DC Motor
int8_t stopDcMotorPB(uint32_t gpio);

// API to update dcmotor speed in closed loop to be called from timer interrupt
void updateDcMotorSpeed();


#endif

