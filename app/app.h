/*
 * app.h
 *
 * Created: 10/10/2022 3:20:31 PM
 *  Author: dell
 */ 


#ifndef APP_H_
#define APP_H_
#define red 2
#define yellow 1
#define green 0
void LEDs_initial();
void car_green();
void car_to_pedestrian();
void pedestrian_green();
void interrupt_car_green();
void interrupt_pedestrain_green();
void pedestrain_to_car();
void normal_mode();
void LEDs_off();
#endif /* APP_H_ */