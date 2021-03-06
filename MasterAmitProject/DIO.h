/*
 * DIO.h
 *
 * Created: 1/9/2021 9:34:33 PM
 *  Author: karim
 */ 


#ifndef DIO_H_
#define DIO_H_
/*Macros*/
#include "DIO_CONFIG.h"
#include "CPU_CONFIGURATION.h"
/*Function Prototypes*/
void DIO_SetPin_Direction(Uint8t port, Uint8t pin, Uint8t direction);
/*
If direction is defined as output
Set - Clear
Toggle
*/
void DIO_SetPin_Value(Uint8t port, Uint8t pin, Uint8t value);
void DIO_TglPin_Value(Uint8t port, Uint8t pin);
/*
If Direction defined as input 
Read(Get value)
*/
Uint8t DIO_GetPin_Value(Uint8t port, Uint8t pin);
/*activate internal pull-up*/
void DIO_SetPULLUp(Uint8t port, Uint8t pin);


#endif /* DIO_H_ */