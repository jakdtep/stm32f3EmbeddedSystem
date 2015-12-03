/*This header contains functions to be called from main.c
and the timer interrupt hanlder*/

#ifndef STM_EMSYS_H
#define STM_EMSYS_H

/*common init*/
void initAllPeripherals();

/*timer interrupt service*/
void emSysTimerService();

/*main tasks service*/
void emSysTaskService();

#endif
