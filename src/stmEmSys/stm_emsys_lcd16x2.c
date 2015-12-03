/*lcd16x2.c 
 *
 * This file implements 16x2 LCD module library
 */

#include "stm_emsys_lcd16x2.h"

extern volatile uint32_t myTickCount;

uint32_t lcdDataGpios[4] = {GPIO_PIN_8, GPIO_PIN_9, GPIO_PIN_10, GPIO_PIN_11};
/*status to track lcd init*/
//static int8_t lcdInitDone = 0;

/*lcd backlight pulse table*/
static uint16_t lcdPulseTb[LCD_BL_PULSE_STEPS] = {250, 400, 550, 750, 900, 750, 550, 400};
static uint32_t lcdPulseStep = 0; 
static uint32_t lcdPulseDelay = 0; 

/*poll and wait till timer expired*/
void pollWaitMs(uint16_t delayMs)
{
	volatile uint32_t expiry = myTickCount + delayMs;
	/*wait till expiry*/
	while(myTickCount < expiry)
		asm volatile("nop\n");
}

/*initializes the gpios needed for LCD in 4 bit mode*/
int8_t initLcdGpioPD()
{
	GPIO_InitTypeDef  GPIO_InitStruct;
	/* Configure the GPIO pins for the digital output */
	/*enable gpio D clock source*/
	__GPIOD_CLK_ENABLE();
	/*populate the init configuration structure (Mike's method)
	 with this method we can easily write data directly into
	 gpio output register than toggling each bit separately*/
	GPIO_InitStruct.Pin       = LCD_RS | LCD_RW | LCD_E |
					lcdDataGpios[0] | lcdDataGpios[1] | 
					lcdDataGpios[2] | lcdDataGpios[3];
	GPIO_InitStruct.Mode      = GPIO_MODE_OUTPUT_PP;
	GPIO_InitStruct.Pull      = GPIO_NOPULL;
	GPIO_InitStruct.Speed     = GPIO_SPEED_LOW;
	GPIO_InitStruct.Alternate = 0;
	/*initialize with above configuration*/
	HAL_GPIO_Init(GPIOD, &GPIO_InitStruct);

	return LCD_OK;
}

/*initializes the gpio needed for LCD backlight on/off*/
int8_t initLcdBlGpioPB()
{
	GPIO_InitTypeDef  GPIO_InitStruct;
	/* Configure the GPIO pins for the backlight */
	__GPIOB_CLK_ENABLE();
	GPIO_InitStruct.Pin       = LCD_BL;
	GPIO_InitStruct.Mode      = GPIO_MODE_AF_PP;
	GPIO_InitStruct.Pull      = GPIO_NOPULL;
	GPIO_InitStruct.Speed     = GPIO_SPEED_HIGH;
	GPIO_InitStruct.Alternate = 1;
	HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);
	
	/*turn the backlight on*/
	//HAL_GPIO_WritePin(GPIOB, LCD_BL, 1);
	return LCD_OK;
}

/*init pwm timer block*/
void initPwmTIM16()
{
	__TIM16_CLK_ENABLE();
	TIM16->PSC = LCD_PWM_PRESCALE;
	TIM16->ARR = LCD_PWM_PERIOD; 
	TIM16->CR1 |= (1<<7);
	TIM16->CCMR1 = 0b01101000;
	TIM16->EGR |= 0b11100010;
	TIM16->BDTR |= (1<<15);
	TIM16->CCER = 0x1;
	TIM16->CR1 |= 1;
}
/*sets the lcd backlight brightness*/
void setLcdBlBrightness(uint16_t bright)
{
    	TIM16->CCR1 = bright;
}

/*write the data before setting the 4bit mode*/
uint8_t writeLcdInitCmd(uint8_t cmd8u)
{
	/*keep Rw=0, RS=0 for commands*/
	HAL_GPIO_WritePin(GPIOD, LCD_RW, 0);
	HAL_GPIO_WritePin(GPIOD, LCD_RS, 0);
	
	/*send data to port direct write and toggle E from 1 to 0*/
	HAL_GPIO_WritePin(GPIOD, LCD_E, 1);
	GPIOD->ODR = (GPIOD->ODR & ~(0xF00)) | (cmd8u << 4);
	HAL_GPIO_WritePin(GPIOD, LCD_E, 0);
	pollWaitMs(1);
	
	return 0;
}

/*write commands to LCD after setting up 4bit mode*/
uint8_t writeLcdCmd4Bit(uint8_t cmd8u)
{
	
	/*keep Rw=0, RS=0 for commands*/
	HAL_GPIO_WritePin(GPIOD, LCD_RW, 0);
	HAL_GPIO_WritePin(GPIOD, LCD_RS, 0);
	
	/*send MSB 4bits to port direct write and toggle E from 1 to 0*/
	HAL_GPIO_WritePin(GPIOD, LCD_E, 1);
	GPIOD->ODR = (GPIOD->ODR &  ~(0xF00)) | ((cmd8u & 0xF0) << 4);
	HAL_GPIO_WritePin(GPIOD, LCD_E, 0);
	pollWaitMs(1);
	
	/*send LSB 4bits to port direct write and toggle E from 1 to 0*/
	HAL_GPIO_WritePin(GPIOD, LCD_E, 1);
	GPIOD->ODR = (GPIOD->ODR &  ~(0xF00))  | ((cmd8u & 0x0F) << 8);
	HAL_GPIO_WritePin(GPIOD, LCD_E, 0);
	pollWaitMs(1);
	
	return LCD_OK;
}

uint8_t writeLcdData4Bit(uint8_t data8u)
{
	/*keep Rw=0, RS=1 for data*/
	HAL_GPIO_WritePin(GPIOD, LCD_RW, 0);
	HAL_GPIO_WritePin(GPIOD, LCD_RS, 1);
	
	/*send MSB 4bits to port and toggle E from 1 to 0*/
	HAL_GPIO_WritePin(GPIOD, LCD_E, 1);
	GPIOD->ODR = (GPIOD->ODR &  ~(0xF00))  | ((data8u & 0xF0) << 4);
	HAL_GPIO_WritePin(GPIOD, LCD_E, 0);
	pollWaitMs(1);
	
	/*send LSB 4bits to port and toggle E from 1 to 0*/
	HAL_GPIO_WritePin(GPIOD, LCD_E, 1);
	GPIOD->ODR = (GPIOD->ODR &  ~(0xF00))  | ((data8u & 0x0F) << 8);
	HAL_GPIO_WritePin(GPIOD, LCD_E, 0);
	pollWaitMs(1);
	return 0;
}

void sendLcdInitSequence(uint8_t dispAttr)
{
	/*basic init sequence from datasheet*/
	pollWaitMs(100);
	writeLcdInitCmd(0x30);
	pollWaitMs(10);
	writeLcdInitCmd(0x30);
	pollWaitMs(10);
	writeLcdInitCmd(0x30);
	pollWaitMs(10);
	/*set up 4 bit mode*/
	writeLcdInitCmd(0x20);
	pollWaitMs(10);
	
	/*send commands in 4bit mode*/
	/*function set command with 2 lines display*/
	writeLcdCmd4Bit(0x28);
	pollWaitMs(10);
	/*choose the correct configuration*/
	switch(dispAttr)
	{
		case LCD_DISP_OFF:
			writeLcdCmd4Bit(0x08);
			break;
		case LCD_DISP_ON:
			writeLcdCmd4Bit(0x0C);
			break;
		case LCD_DISP_ON_CURSOR:
			writeLcdCmd4Bit(0x0E);
			break;
		case LCD_DISP_ON_BLINK:
			writeLcdCmd4Bit(0x0F);
			break;
		default:
			writeLcdCmd4Bit(0x0F);
	}
	pollWaitMs(10);
	/*clear display command*/
	writeLcdCmd4Bit(0x01);
	pollWaitMs(10);
	/*set cursor auto increment*/
	writeLcdCmd4Bit(0x06);
	pollWaitMs(10);
	writeLcdCmd4Bit(0x14);
	pollWaitMs(10);
}

/*clears the LCD display*/
void clearLcd()
{
	/*send the clear command*/
	writeLcdCmd4Bit(0x01);
	pollWaitMs(10);
}

/*move cursor to position*/
void gotoLcd(uint8_t pos)
{
	/*send the DRAM address command with position*/
	writeLcdCmd4Bit(pos | 0x80);
	pollWaitMs(10);
}

/*send a character to LCD. init must be done prior to this*/
int8_t putchLcd(char ch)
{
	writeLcdData4Bit(ch);
	return LCD_OK;
}

/*writes a string to lcd*/
int8_t putsLcd(const char *str)
{
	int8_t count = 0;

	while(*str != '\0')
	{
		writeLcdData4Bit(*str);
		str++;
		count++;
	}
	return count;
}

/*init LCD hardware based on the input flag configuration*/
void initLcd(uint8_t dispAttr)
{
	/*init lcd bus gpios*/
	initLcdGpioPD();
	/*init lcd backlight gpio*/
	initLcdBlGpioPB();
	/*init back light pwm module*/
	initPwmTIM16();
	/*send the init sequence*/
	sendLcdInitSequence(dispAttr);
}


/*pulsate lcd backlight (called from timer interrupt)*/
void pulsateLcdBl()
{
	if(!lcdPulseDelay)
	{
		lcdPulseDelay = myTickCount + LCD_BL_PULSE_RATE;
		lcdPulseStep = 0;
	}else if(myTickCount > lcdPulseDelay)
	{
		setLcdBlBrightness(lcdPulseTb[lcdPulseStep++ & (LCD_BL_PULSE_STEPS-1)]);
		lcdPulseDelay = myTickCount + LCD_BL_PULSE_RATE;
		//printf("%d\n", (int)lcdPulseStep & (LCD_BL_PULSE_STEPS-1));
	}

}
