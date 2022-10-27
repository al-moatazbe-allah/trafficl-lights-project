/*
 * button.h
 *
 * Created: 10/7/2022 5:05:23 PM
 *  Author: dell
 */ 


#ifndef BUTTON_H_
#define BUTTON_H_

void button_init(char port ,char pin);
void button_pullUp(char port ,char pin);
unsigned char button_read(char port,char pin);


#endif /* BUTTON_H_ */