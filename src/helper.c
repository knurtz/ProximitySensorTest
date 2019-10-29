/*
 * helper.c
 *
 *  Created on: Oct 15, 2019
 *      Author: johannes
 *
 *      Helper functions for debugging and other side tasks
 */

#include "helper.h"
#include "pins.h"

extern volatile int delay_counter;				// defined in stm32fxxx_it.c

void delay_ms(int ms) {
	delay_counter = ms;
	while(delay_counter);
}

void DebugLEDs_Init(void) {
	GPIO_InitTypeDef GPIO_InitStructure;
	GPIO_InitStructure.GPIO_Pin = LED1_PIN | LED2_PIN | LED3_PIN | LED4_PIN;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_OUT;
	GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;
	GPIO_InitStructure.GPIO_Speed = GPIO_Low_Speed;
	GPIO_Init(LED_PORT, &GPIO_InitStructure);
	// all LEDs are active low, so disable them by setting the respective pins.
	GPIO_ResetBits(LED_PORT, LED1_PIN | LED2_PIN | LED3_PIN | LED4_PIN);
}


