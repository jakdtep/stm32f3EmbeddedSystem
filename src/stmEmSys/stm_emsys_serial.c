/*serial.c 
 *
 * This file implements serial port init and transmission based on received command
 */

#include "stm_emsys_serial.h"

/* UART handle declaration */
static UART_HandleTypeDef UartHandle;

int initSerialPortC()
{
	GPIO_InitTypeDef  GPIO_InitStruct;
	/* Configure the GPIO pins for the UART */
	__GPIOC_CLK_ENABLE();
	GPIO_InitStruct.Pin       = GPIO_PIN_5;
	GPIO_InitStruct.Mode      = GPIO_MODE_AF_PP;
	GPIO_InitStruct.Pull      = GPIO_PULLUP;
	GPIO_InitStruct.Speed     = GPIO_SPEED_HIGH;
	GPIO_InitStruct.Alternate = 7;
	HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);

	GPIO_InitStruct.Pin       = GPIO_PIN_4;
	GPIO_InitStruct.Mode      = GPIO_MODE_AF_PP;
	GPIO_InitStruct.Pull      = GPIO_PULLUP;
	GPIO_InitStruct.Speed     = GPIO_SPEED_HIGH;
	GPIO_InitStruct.Alternate = 7;
	HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);


	__USART1_CLK_ENABLE();
	/* Put the USART peripheral in the Asynchronous mode (UART Mode) */
	/* UART configured as follows:
	- Word Length = 8 Bits
	- Stop Bit    = One Stop bit
	- Parity      = ODD parity
	- BaudRate    = UARTBAUDRATE baud
	- Hardware flow control disabled (RTS and CTS signals) */
	UartHandle.Instance        = USART1;
	UartHandle.Init.BaudRate   = UARTBAUDRATE;
	UartHandle.Init.WordLength = UART_WORDLENGTH_8B;
	UartHandle.Init.StopBits   = UART_STOPBITS_2;
	UartHandle.Init.Parity     = UART_PARITY_NONE;
	UartHandle.Init.HwFlowCtl  = UART_HWCONTROL_NONE;
	UartHandle.Init.Mode       = UART_MODE_TX_RX;
	
	if (HAL_UART_Init(&UartHandle) != HAL_OK)
	{
		/* Initialization Error */
		Error_Handler();
		return UART_ERR;
	}
	return UART_OK;
}

int transmitStrSerialPortC( char *uartTxBuf)
{
	HAL_StatusTypeDef ret;
	
	printf("Transmitting message: %s\n", uartTxBuf);
	
	ret = HAL_UART_Transmit(&UartHandle, (uint8_t *)uartTxBuf, strlen((const char*)uartTxBuf), UART_TIMEOUT);
	
	if(ret != HAL_OK)
		return UART_ERR;
	else
		return UART_OK;
}
