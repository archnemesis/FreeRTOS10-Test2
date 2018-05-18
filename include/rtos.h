/**
 * @file rtos.h
 * @brief FreeRTOS Initialization Routines
 * @author Robin Gingras
 */

#ifndef INCLUDE_RTOS_H_
#define INCLUDE_RTOS_H_

#ifdef __cplusplus
extern "C"
{
#endif

/** @addtogroup FreeRTOS10-Test2
 * @{
 */

/** @defgroup RTOS RTOS
 * @brief RTOS Module
 * @{
 */

/**
 * Initialize and start the task scheduler.
 */
void RTOS_Init(void);

/**
 * @}
 */

/**
 * @}
 */

#ifdef __cplusplus
}
#endif

#endif /* INCLUDE_RTOS_H_ */
