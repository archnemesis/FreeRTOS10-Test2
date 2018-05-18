/*
 * stm32f4xx_it.c
 *
 *  Created on: May 16, 2018
 *      Author: robin
 */

#include "stm32f4xx_hal.h"
#include "FreeRTOS.h"
#include "task.h"

/**
 * This function handles the SysTick timer.
 */
void SysTick_Handler(void)
{
	HAL_IncTick();

#if INCLUDE_xTaskGetSchedulerState == 1
	if (xTaskGetSchedulerState() != taskSCHEDULER_NOT_STARTED)
	{
#endif
		xPortSysTickHandler();
#if INCLUDE_xTaskGetSchedulerState
	}
#endif
}
