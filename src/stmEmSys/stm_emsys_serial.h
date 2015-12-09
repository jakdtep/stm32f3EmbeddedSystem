/*
This file implements Serial port  init based on received command
*/

#ifndef STM_EMSYS_SERIAL_H
#define STM_EMSYS_SERIAL_H

#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include "stm32f3xx_hal.h"
#include "stm32f3_discovery.h"

#include "common.h"

#define UART_ERR        -1
#define UART_OK         0
#define UART_TIMEOUT    500
#define UART_BUF_SIZE   50

// API to initialize serial port
int initSerialPortC();

// API to transmit serial port data on port C
int transmitStrSerialPortC( char * );


#endif
