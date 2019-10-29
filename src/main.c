/*
 * main.c
 *
 *  Created on: 29.09.2019
 *      Author: Johannes Herold
 */

// ============================== INCLUDES ==============================

#include <stm32f4xx.h>

#include "pins.h"
#include "helper.h"

// ============================== DEFINES ==============================
#include "config.h"

// ============================== VARIABLES ==============================


// ============================== FUNCTION DEFINITIONS ==============================



// ============================== MAIN ==============================

void main(void) {

	SystemInit();
	RCC_AHB1PeriphClockCmd(USED_GPIO_PORTS_RCC, ENABLE);		// activate all GPIO ports that are used in this project
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_SYSCFG, ENABLE);		// required for setting up EXTI lines
	SysTick_Config(SystemCoreClock / 1000);						// start system timer at 1 kHz (1 ms interval)

	DebugLEDs_Init();

	while(1) {


	}		// end of while(1)

} 			// end of main(void)


