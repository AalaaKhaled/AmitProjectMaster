/*
* DIO.c
*
* Created: 1/9/2021 9:34:44 PM
*  Author: karim
*/

#include "DIO.h"
void DIO_SetPin_Direction(Uint8t port, Uint8t pin, Uint8t direction)
{
	switch (direction)
	{
		case DIO_PIN_INPUT:
		switch(port)
		{
			case DIO_PORTA:
			CLR_BIT(DDRA, pin);
			break;
			case DIO_PORTB:
			CLR_BIT(DDRB, pin);
			break;
			case DIO_PORTC:
			CLR_BIT(DDRC, pin);
			break;
			case DIO_PORTD:
			CLR_BIT(DDRD, pin);
			break;
		}
		break;
		case DIO_PIN_OUTPUT:
		switch(port)
		{
			case DIO_PORTA:
			SET_BIT(DDRA, pin);
			break;
			case DIO_PORTB:
			SET_BIT(DDRB, pin);
			break;
			case DIO_PORTC:
			SET_BIT(DDRC, pin);
			break;
			case DIO_PORTD:
			SET_BIT(DDRD, pin);
			break;
		}
		break;
	}
}
void DIO_SetPin_Value(Uint8t port, Uint8t pin, Uint8t value)
{
	switch (value)
	{
		case DIO_PIN_LOW:
		switch(port)
		{
			case DIO_PORTA:
			CLR_BIT(PORTA, pin);
			break;
			case DIO_PORTB:
			CLR_BIT(PORTB, pin);
			break;
			case DIO_PORTC:
			CLR_BIT(PORTC, pin);
			break;
			case DIO_PORTD:
			CLR_BIT(PORTD, pin);
			break;
		}
		break;
		case DIO_PIN_HIGH:
		switch(port)
		{
			case DIO_PORTA:
			SET_BIT(PORTA, pin);
			break;
			case DIO_PORTB:
			SET_BIT(PORTB, pin);
			break;
			case DIO_PORTC:
			SET_BIT(PORTC, pin);
			break;
			case DIO_PORTD:
			SET_BIT(PORTD, pin);
			break;
		}
		break;
	}
}
void DIO_TglPin_Value(Uint8t port, Uint8t pin)
{
	switch(port)
	{
		case DIO_PORTA:
		TGL_BIT(PORTA, pin);
		break;
		case DIO_PORTB:
		TGL_BIT(PORTB, pin);
		break;
		case DIO_PORTC:
		TGL_BIT(PORTC, pin);
		break;
		case DIO_PORTD:
		TGL_BIT(PORTD, pin);
		break;
	}
}
Uint8t DIO_GetPin_Value(Uint8t port, Uint8t pin)
{
	Uint8t value = 0;
	switch(port)
	{
		case DIO_PORTA:
		value = GET_BIT(PINA, pin);
		break;
		case DIO_PORTB:
		value = GET_BIT(PINB, pin);
		break;
		case DIO_PORTC:
		value = GET_BIT(PINC, pin);
		break;
		case DIO_PORTD:
		value = GET_BIT(PIND, pin);
		break;
	}
	return value;
}
void DIO_SetPULLUp(Uint8t port, Uint8t pin)
{
	switch (port)
	{
		case DIO_PORTA:
		SET_BIT(PORTA, pin);
		break;
		case DIO_PORTB:
		SET_BIT(PORTB, pin);
		break;
		case DIO_PORTC:
		SET_BIT(PORTC, pin);
		break;
		case DIO_PORTD:
		SET_BIT(PORTD, pin);
		break;
	}
}