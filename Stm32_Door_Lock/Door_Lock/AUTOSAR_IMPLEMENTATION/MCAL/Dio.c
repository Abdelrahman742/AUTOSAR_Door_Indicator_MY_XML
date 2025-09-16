/*
 * keypad.c
 *
 * Created: 4/22/2021 6:32:10 PM
 *  Author: Marco
 */

#include "Dio.h"

unsigned char DioRead(unsigned char ID)
{
	return (MCAL_GPIO_ReadPin(GPIO_USED, ID));
}

void DioWrite(unsigned char ID,unsigned char level)
{
	MCAL_GPIO_WritePin(GPIO_USED, ID, level);
}
