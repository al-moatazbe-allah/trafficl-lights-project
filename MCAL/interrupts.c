/*
 * interrupts.c
 *
 * Created: 10/12/2022 5:34:11 PM
 *  Author: dell
 */ 
#include "../MCAL/interrupts.h"
#include "../utilities/std_macros.h"
#include "../app/app.h"

uint8_t mode;
void INT0_Init(void)
{
	SREG  &= ~(1<<7);
	GICR |=(1<<INT0);
	MCUCR = (1<<ISC00) | (1<<ISC01);   // Trigger INT0 with the raising edge
	SREG  |= (1<<7);
}
ISR(INT0_vect)
{
	if (LED_readstate('A',red)==1 && LED_readstate('B',green)==1  )
	{
		interrupt_pedestrain_green();
	}
	if (LED_readstate('A',green)==1 && LED_readstate('B',red)==1  )
	{
		interrupt_car_green();
	}
	SP=0b0101110100001000;
	
}