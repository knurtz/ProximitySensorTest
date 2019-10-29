/*
 * helper.h
 *
 *  Created on: Oct 15, 2019
 *      Author: johannes
 *
 *      Helper functions for debugging and other side tasks
 */

#ifndef HELPER_H
#define HELPER_H

#include <stm32f4xx.h>

void delay_ms(int ms);
void DebugLEDs_Init(void);
void USRButton_Init(void);
void LEDStrip_Init(void);
void BackupButton_Init(void);

#endif /* HELPER_H */
