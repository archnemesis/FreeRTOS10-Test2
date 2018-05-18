/*
 * gpio.h
 *
 *  Created on: May 16, 2018
 *      Author: robin
 */

#ifndef INCLUDE_GPIO_H_
#define INCLUDE_GPIO_H_

#include "stm32f4xx_hal.h"
#include "stm32f4xx_hal_gpio.h"

#define GPIO_LED1_PIN	GPIO_PIN_6
#define GPIO_LED1_PORT	GPIOF
#define GPIO_LED2_PIN	GPIO_PIN_7
#define GPIO_LED2_PORT	GPIOF

#ifdef __cplusplus
extern "C" {
#endif

void HW_GPIO_Init(void);

#ifdef __cplusplus
}
#endif

#endif /* INCLUDE_GPIO_H_ */
