/*
 * app.c
 *
 * Created: 10/10/2022 3:20:43 PM
 *  Author: dell
 */ 
#include "../app/app.h"
#include "../MCAL/DIO.h"
#include "../ECUAL/LEDCONT.h"
#define F_CPU 8000000UL
#include <avr/delay.h>

void LEDs_initial(){
	LED_init('A',0);
	LED_init('A',1);
	LED_init('A',2);
	LED_init('B',0);
	LED_init('B',1);
	LED_init('B',2);
}
void car_green(){
	LED_on('A',green);
	LED_on('B',red);
	_delay_ms(5000);
}
void car_to_pedestrian(){
	LED_blinking('A' ,1,'B',1 ,10);
	LED_off('A',green);
	LED_off('A',yellow);
	LED_off('B',red);
	LED_off('B',yellow);
}
void pedestrian_green(){
	LED_on('A',red);
	LED_on('B',green);
	_delay_ms(5000);
}
void pedestrain_to_car(){
	LED_blinking('A' ,1,'B',1 ,10);
	LED_off('A',red);
	LED_off('A',yellow);
	LED_off('B',green);
	LED_off('B',yellow);
	
}
void normal_mode(){
	pedestrian_green();
	pedestrain_to_car();
	car_green();
	car_to_pedestrian();
}

void interrupt_car_green(){
	LEDs_off();
	LED_on('A',green);
	LED_on('B',red);
	car_to_pedestrian();
}
void interrupt_pedestrain_green(){
	LEDs_off();
	normal_mode();
}

void LEDs_off(){
	LED_off('A',red);
	LED_off('A',green);
	LED_off('A',yellow);
	LED_off('B',red);
	LED_off('B',green);
	LED_off('B',yellow);
}