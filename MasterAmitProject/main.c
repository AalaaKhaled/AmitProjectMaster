/*
 * MasterAmitProject.c
 *
 * Created: 3/3/2021 8:42:31 PM
 * Author : Alaa
 */ 

#include "UART.h"
#include "LED.h"
#include "SPI.h"
int main(void)
{
	Uint8t data;
	LED0_Init();
	UART_Init();
	SPI_Init();
	SPI_SlaveSelect(0);
    /* Replace with your application code */
    while (1) 
    {
		
		data = UART_Receive();
		LED0_TGL();
		SPI_Transmit(data);
		
    }
}

