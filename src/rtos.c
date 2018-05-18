/*
 * rtos.c
 *
 *  Created on: May 16, 2018
 *      Author: robin
 */

#include "rtos.h"
#include "FreeRTOS.h"
#include "task.h"
#include "gpio.h"

#ifdef __GNUC__
#define USED __attribute__((used))
#else
#define USED
#endif

const int USED uxTopUsedPriority = configMAX_PRIORITIES - 1;

#define SAMPLETASK_STACK_SIZE 200
StaticTask_t xSampleTask;
StackType_t xSampleTaskStack[SAMPLETASK_STACK_SIZE];
TaskHandle_t xSampleTaskHandle;

#if configSUPPORT_STATIC_ALLOCATION

StaticTask_t xIdleTaskTCBBuffer;
StackType_t xIdleStack[configMINIMAL_STACK_SIZE];

void vApplicationGetIdleTaskMemory( StaticTask_t **ppxIdleTaskTCBBuffer, StackType_t **ppxIdleTaskStackBuffer, uint32_t *pulIdleTaskStackSize )
{
	*ppxIdleTaskTCBBuffer = &xIdleTaskTCBBuffer;
	*ppxIdleTaskStackBuffer = &xIdleStack[0];
	*pulIdleTaskStackSize = configMINIMAL_STACK_SIZE;
}

#endif

#if configSUPPORT_STATIC_ALLOCATION && configUSE_TIMERS
StaticTask_t xTimerTaskTCBBuffer;
StackType_t xTimerStack[configTIMER_TASK_STACK_DEPTH];

void
#endif

/*!
 * A sample task demonstrating task implementation.
 */
void SampleTask_Main(void * pvParameters)
{
	(void) pvParameters;

	HAL_GPIO_WritePin(GPIO_LED1_PORT, GPIO_LED1_PIN, GPIO_PIN_SET);

	for (;;)
	{
		/* Task code goes here */
	}
}

void RTOS_Init(void)
{
	xSampleTaskHandle = xTaskCreateStatic(
			SampleTask_Main,
			"SampleTask",
			SAMPLETASK_STACK_SIZE,
			(void *) 1,
			tskIDLE_PRIORITY,
			xSampleTaskStack,
			&xSampleTask);

	vTaskStartScheduler();
}
