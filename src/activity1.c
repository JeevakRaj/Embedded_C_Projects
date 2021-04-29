/**
 * @file activity1.c
 * @author jeevak 256040
 * @brief functions for activity1- to blink LED only if seat is occupied and Heater is turned on
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#define F_CPU 8000000UL
#include <avr/io.h>
#include <util/delay.h>

/**
 * @brief Defining the PB6 as switch 1
 * 
 */
#define switch1 PB6 

/**
 * @brief  Defining the PB7 as switch 2
 * 
 */
#define switch2 PB7 
/**
 * @brief LED as PB0
 * 
 */
#define LED PB0 

/**
 * @brief Initializing the port Values
 * 
 */
void PortInitialize()
{
    DDRB |=(1<<LED);
    DDRB &=~(1<<switch1);
    PORTB |=(1<<switch1);
    DDRB &=~(1<<switch2);
    PORTB |=(1<<switch2);
}

/**
 * @brief Function for activity1
 * 
 * @return int 
 */

int activity1()
{
    PortInitialize();
    if(!(PINB&(1<<switch1))&&!(PINB&(1<<switch2)))
    {
        PORTB |=(1<<LED);
        _delay_ms(20);
        return 0;
    }
    else{
        PORTB &=~(1<<LED);
        _delay_ms(20);
        return 1;
    }
}
