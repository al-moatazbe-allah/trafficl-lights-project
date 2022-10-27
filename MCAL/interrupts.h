/*
 * interrupts.h
 *
 * Created: 10/7/2022 4:47:30 PM
 *  Author: dell
 */ 


#ifndef INTERRUPTS_H_
#define INTERRUPTS_H_
#define INT0   6
#define INT1   7
#define INT2   5

#define ISC00    0
#define ISC01    1
#define ISC10    2
#define ISC11    3
#define ISC2     6

void INT0_Init(void);

#endif /* INTERRUPTS_H_ */