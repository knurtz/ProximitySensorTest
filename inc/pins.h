/*
 * pins.h
 *
 *  Created on: 15.10.2019
 *      Author: Johannes Herold
 */

#ifndef PINS_H
#define PINS_H

#include <stm32f4xx.h>

// used GPIO ports
#define USED_GPIO_PORTS_RCC		RCC_AHB1Periph_GPIOB | RCC_AHB1Periph_GPIOD


#define SENSOR_SDA_PORT			GPIOB
#define SENSOR_SDA_PIN			GPIO_Pin_7

#define SENSOR_SCL_PORT			GPIOB
#define SENSOR_SCL_PIN			GPIO_Pin_8

#define SENSOR_I2C_AF			GPIO_AF_I2C1

#define SENSOR_INT_PORT			GPIOB
#define SENSOR_INT_PIN			GPIO_Pin_9
#define SENSOR_INT_PORT_SOURCE	EXTI_PortSourceGPIOB
#define SENSOR_INT_PIN_SOURCE	EXTI_PinSource9
#define SENSOR_INT_EXTI_LINE	EXTI_Line9
#define SENSOR_INT_IRQn         EXTI9_5_IRQn


#define LED_PORT				GPIOD
#define LED1_PIN				GPIO_Pin_12
#define LED2_PIN				GPIO_Pin_13
#define LED3_PIN				GPIO_Pin_14
#define LED4_PIN				GPIO_Pin_15



#endif /* PINS_H */
