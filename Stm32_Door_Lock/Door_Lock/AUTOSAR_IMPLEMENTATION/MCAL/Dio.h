/*
 * I2C_Slave_EEPROM.h
 *
 *  Created on: Aug 18, 2021
 *      Author: kkhalil
 */

#ifndef MCAL_DIO_H_
#define MCAL_DIO_H_

#include "stm32f103x8_I2C_driver.h"

#define DOOR  GPIO_PIN_3
#define LED   GPIO_PIN_7

#define GPIO_USED  GPIOA

unsigned char DioRead(unsigned char ID);
void DioWrite(unsigned char ID ,unsigned char level);

#endif
