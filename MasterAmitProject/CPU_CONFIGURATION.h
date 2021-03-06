/*
 * CPU_CONFIGURATION.h
 *
 * Created: 1/8/2021 9:57:50 PM
 *  Author: karim
 */ 


#ifndef CPU_CONFIGURATION_H_
#define CPU_CONFIGURATION_H_

#undef  F_CPU /*To cancel using internal oscillator*/
#define F_CPU 16000000/*To define external oscillator*/

#include <avr/io.h>/*Library for all input and output and interrupts defined*/
#include <util/delay.h>/*To define delay function*/
#include <avr/interrupt.h>/*To define ISR functions*/
#include "STD_TYPES.h"/*Standard data types*/
#include "BIT_MATH.h"/*Bit math macros like functions*/
#include "DIO.h"

#endif /* CPU_CONFIGURATION_H_ */