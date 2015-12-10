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

#define DCMOTOR_TACHO_CH1        5
#define DCMOTOR_TACHO_CH2        12

#define DCMOTOR_ADC2SPEED_M             3
#define DCMOTOR_ADC2SPEED_C             43
#define DCMOTOR_RESPOND_DELTA           75
#define DCMOTOR_SPEED_STEP              10
#define DCMOTOR_MIN_SPEED               300
#define DCMOTOR_MAX_SPEED               1000


/*API to initialize dc motor*/
int8_t initDcMotorControl();

// API to start DC Motor
void startDcMotor(uint8_t motorId, uint32_t cmdArg1, int32_t cmdArg2);

/*set dc motor direction gpios on portC*/
int8_t setDirDcMotorPC(uint8_t motorId, int32_t speed, uint32_t *gpios);

/*set dc motor speed PWM  portB*/
int8_t setSpeedDcMotorPB(uint8_t motorId, int32_t speed);

/*turn dc motor off  portB*/
int8_t stopDcMotorPB(uint8_t motorId);

// API to update dcmotor speed in closed loop to be called from timer interrupt
void updateDcMotorSpeed();

#endif

