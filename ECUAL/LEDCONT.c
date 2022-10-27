/*
 * CFile1.c
 *
 * Created: 10/7/2022 4:10:11 PM
 *  Author: dell
 */ 
#include "../ECUAL/LEDCONT.h"
#include "../utilities/std_macros.h"
#define F_CPU 8000000UL
#include <avr/delay.h>

void LED_init(char port,char pin){
	DIO_vsetPINDir(port ,pin,1);
}
void LED_on(char port , char pin){
	DIO_write(port,pin,1);
}
void LED_off(char port ,char pin){
	DIO_write(port,pin,0);
}
void LED_toggle(char port ,char pin){
	DIO_toggle(port, pin);
}
unsigned char LED_readstate(char port, char pin){
	 return DIO_u8read(port , pin);
}
void LED_blinking(char port1 ,char pin1,char port2,char pin2 ,unsigned char timesblink){
	for(unsigned char i=0;i<timesblink;i++ ){
		LED_toggle(port1,pin1);
		LED_toggle(port2,pin2);
		_delay_ms(500);
	}
}
