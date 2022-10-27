/*
 * button.c
 *
 * Created: 10/7/2022 5:10:46 PM
 *  Author: dell
 */ 
#include "../ECUAL/button.h"
#include "../utilities/std_macros.h"
#include "../MCAL/DIO.h"

 void button_init(char port ,char pin){
	 	DIO_vsetPINDir(port , pin,0);
		
 }
 void button_pullUp(char port ,char pin){
		DIO_write(port ,pin,1);
 }
 unsigned char button_read(char port,char pin){
		return DIO_u8read(port ,pin);
 }