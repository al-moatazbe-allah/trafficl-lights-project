/*
 * CFile1.c
 *
 * Created: 10/13/2022 10:45:36 AM
 *  Author: dell
 */ 
#include "../MCAL/timers.h"
void Timer0_Delay(void)
{
	TCNT0 = 5; // Set Timer0 initial value to 5

	/* Configure the timer control register
	 * 1. Non PWM mode FOC0=1
	 * 2. Normal Mode WGM01=0 & WGM00=0
	 * 3. Normal Mode COM00=0 & COM01=0
	 * 4. clock = F_CPU/1024 CS00=1 CS01=0 CS02=1
	 */
	TCCR0 = (1<<FOC0) | (1<<CS02) | (1<<CS00);

	while(!(TIFR & (1<<TOV0))); // Wait until the Timer0 Overflow occurs (wait until TOV0 = 1)

	TIFR |= (1<<TOV0); // Clear TOV0 bit by set its value

	TCCR0 = 0; // Stop Timer0 by clear the Clock bits (CS00, CS01 and CS02)
}
void Delay_s(uint8_t number)
{
	for(int i = 0 ; i<number*4 ; i++)
	{
		Timer0_Delay();
	}
}