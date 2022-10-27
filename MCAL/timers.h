/*
 * timers.h
 *
 * Created: 10/13/2022 10:46:32 AM
 *  Author: dell
 */ 


#ifndef TIMERS_H_
#define TIMERS_H_

#include "../utilities/typedefS.h"
#include "../utilities/std_macros.h"

#define CS00   0
#define CS01   1
#define CS02   2
#define FOC0   7
#define TOIE0  0
#define TOV0   0
void Timer0_Delay(void);
void Delay_s(uint8_t number);





#endif /* TIMERS_H_ */