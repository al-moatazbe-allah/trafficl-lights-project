/*
 * traffic lights control FWD.c
 *
 * Created: 10/12/2022 4:52:26 PM
 * Author : dell
 */ 

#include <avr/io.h>
#include "app/app.h"
#include "ECUAL/button.h"
#include "ECUAL/LEDCONT.h"
#include "MCAL/DIO.h"
#include "MCAL/interrupts.h"
#include "utilities/std_macros.h"
#include "MCAL/timers.h"
int main(void)
{
    while (1) 
    {
		 normal_mode();
    }
}

