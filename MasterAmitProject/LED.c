/*
* LED.c
*
* Created: 1/9/2021 8:45:24 PM
*  Author: karim
*/

#include "LED.h"
/*LED-0 Functions*/
void LED0_Init(void)
{
	/*Set LED direction as output*/
	//SET_BIT(DDRC, 2);
	DIO_SetPin_Direction(DIO_PORTC, LED0_PIN, LED_OUTPUT);
}
void LED0_ON(void)
{
	/*Set value in PORTC*/
	//SET_BIT(PORTC, 2);
	DIO_SetPin_Value(LED0_PORT, LED0_PIN, LED_HIGH);
}
void LED0_OFF(void)
{
	/*Clear value in PORTC*/
	//CLR_BIT(PORTC, 2);
	DIO_SetPin_Value(LED0_PORT, LED0_PIN, LED_LOW);
}
void LED0_TGL(void)
{
	/*Toggle value in PORTC*/
	//TGL_BIT(PORTC, 2);
	DIO_TglPin_Value(LED0_PORT, LED0_PIN);
}
/*LED-1 Functions*/
void LED1_Init(void)
{
	DIO_SetPin_Direction(LED1_PORT, LED1_PIN, LED_OUTPUT);
}
void LED1_ON(void)
{
	DIO_SetPin_Value(LED1_PORT, LED1_PIN, LED_HIGH);
}
void LED1_OFF(void)
{
	DIO_SetPin_Value(LED1_PORT, LED1_PIN, LED_LOW);
}
void LED1_TGL(void)
{
	DIO_TglPin_Value(LED1_PORT, LED1_PIN);
}
/*LED-2 Functions*/
void LED2_Init(void)
{
	DIO_SetPin_Direction(LED2_PORT, LED2_PIN, LED_OUTPUT);
}
void LED2_ON(void)
{
	DIO_SetPin_Value(LED2_PORT, LED2_PIN, LED_HIGH);
}
void LED2_OFF(void)
{
	DIO_SetPin_Value(LED2_PORT, LED2_PIN, LED_LOW);
}
void LED2_TGL(void)
{
	DIO_TglPin_Value(LED2_PORT, LED2_PIN);
}