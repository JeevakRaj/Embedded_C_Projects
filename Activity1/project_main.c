/**
 * @file project_main.c
 * @author jeevak
 * @brief Turn the LED On if both the switch is pressed
 * @version 0.1
 * @date 2021-04-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "activity1.h"

/**
 * @brief To initialize all the ports
 * 
 */
void peripheral_init(void)
{
	/* Configure LED Pin */
	DDRB |=(1<<PB0);
    DDRB &=~(1<<PB6);
    PORTB |=(1<<PB6);
    DDRB &=~(1<<PB7);
    PORTB |=(1<<PB7);
}

/**
 * @brief Main funtion
 * 
 * @return int 
 */
int main(void)
{
    peripheral_init();
    while(1)
    {
        if(!(PINB&(1<<PB6))&&!(PINB&(1<<PB7)))
        {
           PORTB |=(1<<PB0);
        _delay_ms(20);
        }
        else{
            PORTB &=~(1<<PB0);
        _delay_ms(20);
        }
    }
    return 0;
}
