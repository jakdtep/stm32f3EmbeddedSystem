/*This file defines main functions to be called from main.c 
and interrupt handler*/

#include "stm_emsys.h"
#include "stm_emsys_lib.h"


/*timer interrupt service*/
void emSysTimerService()
{
}

/*main tasks service*/
void emSysTaskService()
{
}

/************commands***************/
/*ADC commands*/
void CmdAdcInit(int mode)
{
	if(mode != CMD_INTERACTIVE) return;
	printf("ADC Init\n");
	
	initAdcPortA();
}

ADD_CMD("adcinit", CmdAdcInit, "		Command to initialize ADC at port A");

void CmdAdcRead(int mode)
{
	uint32_t tempCmdArgInt;
	int16_t adcVal;

	if(mode != CMD_INTERACTIVE) return;

	fetch_uint32_arg(&tempCmdArgInt);

	if(tempCmdArgInt < 2 || tempCmdArgInt > 5)
	{
		printf("argument out of range\n");
		return;
	}
	
	adcVal = readAdcPortA(tempCmdArgInt);

	if(adcVal != ADC_ERR)
		printf("Analog value at GPIO PA%d is %d\n", (int)tempCmdArgInt, adcVal);
}

ADD_CMD("adcread", CmdAdcRead, "adcread <ch[1-4]> Command to read ADC after adcinit command");
