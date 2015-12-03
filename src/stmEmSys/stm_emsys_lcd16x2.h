 /*
 * This file implements 16x2 lcd init and write string APIs
 */

#ifndef STM_EMSYS_LCD16X2_H
#define STM_EMSYS_LCD16X2_H

#include <stdio.h>
#include <stdint.h>
#include "stm32f3xx_hal.h"
#include "stm32f3_discovery.h"

#include "common.h"

#define LCD_ERR		-1
#define LCD_OK		0
#define LCD_RS		GPIO_PIN_4
#define LCD_RW		GPIO_PIN_3
#define LCD_E		GPIO_PIN_7
#define LCD_BL		GPIO_PIN_8

#define LCD_PWM_PRESCALE    72
#define LCD_PWM_PERIOD      1000
#define LCD_BL_PULSE_ON     1

#define LCD_BL_PULSE_RATE   100
/*multiple of 8 for easy modulo*/
#define LCD_BL_PULSE_STEPS  8

#define LCD_DISP_OFF		0
#define LCD_DISP_ON		    1
#define LCD_DISP_ON_CURSOR	2
#define LCD_DISP_ON_BLINK	3

/*init LCD hardware based on the input flag configuration*/
void initLcd(uint8_t dispAttr);

/*writes a string to lcd*/
int8_t putsLcd(const char *str);

/*send a character to LCD. init must be done prior to this*/
int8_t putchLcd(char ch);

/*move cursor to position*/
void gotoLcd(uint8_t pos);

/*clears the LCD display*/
void clearLcd();

/*sets lcd backlight brightness*/
void setLcdBlBrightness(uint16_t bright);

/*pulsate lcd backlight (called from timer interrupt)*/
void pulsateLcdBl();
#endif
