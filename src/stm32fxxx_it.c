/**
  ******************************************************************************
  * @file    stm32fxxx_it.c
  * @author  MCD Application Team
  * @version V2.2.1
  * @date    17-March-2018
  * @brief   This file includes the interrupt handlers for the application
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2015 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                      <http://www.st.com/SLA0044>
  *
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------ */
#include "pins.h"
#include "config.h"

// Counter variables
volatile int blink_counter = 0, delay_counter = 0;

/******************************************************************************/
/* Cortex-M Processor Exceptions Handlers */
/******************************************************************************/


/**
  * @brief  SysTick_Handler
  *         This function handles the system interrupt. It is used for a debug blink and the delay timer.
  * @param  None
  * @retval None
  */
void SysTick_Handler(void) {
	if (blink_counter++ >= 500) {					// blink at 2 Hz
		blink_counter = 0;
		GPIO_ToggleBits(LED_PORT, LED1_PIN);
	}
	if (delay_counter) delay_counter--;
}


/**
  * @brief  EXTI9_5_IRQHandler
  *         This function handles the external interrupts on pins 5 to 9. It is used for the interrupt pin of the proximity sensor
  * @param  None
  * @retval None
  */
void EXTI9_5_IRQHandler(void) {

	if (EXTI_GetITStatus(SENSOR_INT_EXTI_LINE) != RESET) {
		EXTI_ClearITPendingBit(SENSOR_INT_EXTI_LINE);

	}

}



/******************************************************************************/
/* STM32Fxxx Peripherals Interrupt Handlers */
/* Add here the Interrupt Handler for the used peripheral(s) (PPP), for the */
/* available peripheral interrupt handler's name please refer to the startup */
/* file (startup_stm32fxxx.s).  */
/******************************************************************************/


/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
