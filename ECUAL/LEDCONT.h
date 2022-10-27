/*
 * LEDCONT.h
 *
 * Created: 10/7/2022 4:10:54 PM
 *  Author: dell
 */ 


#ifndef LEDCONT_H_
#define LEDCONT_H_
#include "../MCAL/DIO.h"
void LED_init(char port,char pin);
void LED_on(char port,char pin);
void LED_off(char port, char pin);
unsigned char LED_readstate(char port,char pin);
void LED_toggle(char port,char pin);
void LED_blinking(char port1 ,char pin1,char port2,char pin2 ,unsigned char timesblink);
#endif /* LEDCONT_H_ */