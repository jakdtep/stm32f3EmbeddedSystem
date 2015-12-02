/*This file defines main functions to be called from main.c 
and interrupt handler*/

#include "stm_emsys.h"
#include "stm_emsys_lib.h"


/*timer interrupt service*/
void emSysTimerService()
{
    triggerStepper();
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


/*commands for stepper motor*/
void CmdStepper(int mode)
{
	uint32_t cmdArg1, cmdArg2, cmdArgNo;

	if(mode != CMD_INTERACTIVE) return;
	
	/* check for valid arguments*/
	if(fetch_int32_arg((int32_t*)&cmdArgNo) < 0)
	{
		printf("Stepper motor number missing\n");
		return;
	}
	
	/* check for valid arguments*/
	if(fetch_int32_arg((int32_t*)&cmdArg1) < 0)
	{
		printf("Step count missing\n");
		return;
	}
	
	if(fetch_uint32_arg((uint32_t*)&cmdArg2) < 0)
	{
		printf("step delay missing\n");
		return;
	}

	/*activate stepper*/
	if(activateStepper(cmdArgNo, cmdArg1, cmdArg2) != STEPPER_OK)
		printf("Stepper error\n");
	else
		printf("Stepper Success!!\n");
}

ADD_CMD("stepper", CmdStepper, "<steps [0-reset position]> <delay> Command to activate stepper motor");
