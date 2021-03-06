/*
 * LED_CONFIG.h
 *
 * Created: 1/9/2021 10:08:58 PM
 *  Author: karim
 */ 
#ifndef LED_CONFIG_H_
#define LED_CONFIG_H_
#include "CPU_CONFIGURATION.h"
/*LED Port*/
#define LED0_PORT DIO_PORTC
#define LED1_PORT DIO_PORTC
#define LED2_PORT DIO_PORTD
/*LED pin*/
#define LED0_PIN  DIO_PIN2
#define LED1_PIN  DIO_PIN7
#define LED2_PIN  DIO_PIN3
/*LED Direction*/
#define LED_OUTPUT DIO_PIN_OUTPUT
/*LED State*/
#define LED_HIGH DIO_PIN_HIGH
#define LED_LOW  DIO_PIN_LOW

#endif /* LED_CONFIG_H_ */