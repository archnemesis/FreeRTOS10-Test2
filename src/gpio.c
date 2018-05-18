/*
 * gpio.c
 *
 *  Created on: May 16, 2018
 *      Author: robin
 */

#include "gpio.h"
#include "stm32f4xx_hal_rcc.h"

void HW_GPIO_Init(void)
{
	GPIO_InitTypeDef GPIO_InitStruct;

	__HAL_RCC_GPIOF_CLK_ENABLE();

	HAL_GPIO_WritePin(GPIO_LED1_PORT, GPIO_LED1_PIN, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIO_LED2_PORT, GPIO_LED2_PIN, GPIO_PIN_RESET);

	GPIO_InitStruct.Pin = GPIO_LED1_PIN | GPIO_LED2_PIN;
	GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
	GPIO_InitStruct.Pull = GPIO_NOPULL;
	GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
	HAL_GPIO_Init(GPIOF, &GPIO_InitStruct);
}
