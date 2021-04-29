/**
 * @file activity4.c
 * @author jeevak 256040
 * @brief sending the values to Serial monitor
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#define F_CPU 8000000UL
#include <avr/io.h>
#include<util/delay.h>
#include "activity2.h"


/**
 * @brief Initializing the USART Value
 * 
 * @param ubrr_value Frequenct/2*baudrate
 */
void USARTInit(char ubrr_value)
{
    UBRR0L = ubrr_value;
    UBRR0H = (ubrr_value>>8)&0x00ff;
    UCSR0C=(1<<UMSEL00)|(1<<UCSZ01)|(1<<UCSZ00);

    UCSR0B=(1<<RXEN0)|(1<<TXEN0)|(1<<RXCIE0)|(1<<TXCIE0);
}

/**
 * @brief Writing character value to USART
 * 
 * @param data character data
 */
void USARTWriteChar(char data)
{

    while(!(UCSR0A & (1<<UDRE0)))
    {

    }
    UDR0=data;
}

/**
 * @brief Sending string to USART (that is using a for loop and sending character by character)
 * 
 * @param str string
 */
void UART_SendString(char *str)
{
	unsigned char j=0;

	while (str[j]!=0)
	{
		USARTWriteChar(str[j]);
		j++;
	}
}

/**
 * @brief Displaying the temp values to Serial monitor
 * 
 * @param temp1 previous temperature value
 * @return int 
 */
int activity4(int temp1)
{
    USARTInit(103);
    InitADC();
    TCCR1A|=(1<<COM1A1)|(1<<WGM11)|(1<<WGM10);
    TCCR1B|=(1<<WGM12)|(1<<CS01)|(1<<CS00);
    DDRB|=(1<<PB1);
    uint16_t temp;

    temp=ReadADC(0);
    if(temp1!=temp)
    {
        if(temp>=0&&temp<=200)
        {
            UART_SendString("The temperature is: 20");
            USARTWriteChar(176);
            UART_SendString("C\n");
        }
        if(temp>=210&&temp<=500)
        {
            UART_SendString("The temperature is: 25");
            USARTWriteChar(176);
            UART_SendString("C\n");
        }
        if(temp>=510&&temp<=700)
        {
            UART_SendString("The temperature is: 29");
            USARTWriteChar(176);
            UART_SendString("C\n");
        }
        if(temp>=710&&temp<=1024)
        {
            UART_SendString("The temperature is: 33");
            USARTWriteChar(176);
            UART_SendString("C\n");
        }
    }
    temp1=temp;
    return temp1;
}
