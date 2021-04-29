/**
 * @file activity3.c
 * @author jeevak 256040
 * @brief Displaying the PWM in CRO according to the temp value
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
#define refference_val OCR1A

/**
 * @brief Displaying the PWM in CRO according to the temp value
 * 
 * @return int 
 */

int activity3()
{
    InitADC();
    TCCR1A|=(1<<COM1A1)|(1<<WGM11)|(1<<WGM10);
    TCCR1B|=(1<<WGM12)|(1<<CS01)|(1<<CS00);
    DDRB|=(1<<PB1);
    uint16_t temp_adc;
    temp_adc=ReadADC(0);
    _delay_ms(200);
    if(temp_adc>=0&&temp_adc<=200)
    {
        refference_val=204;
        _delay_ms(20);
    }
    else if(temp_adc>=210&&temp_adc<=500)
    {
        refference_val=409.6;
        _delay_ms(20);
    }
    else if(temp_adc>=510&&temp_adc<=700)
    {
        refference_val=716.8;
        _delay_ms(20);
    }
    else if(temp_adc>=710&&temp_adc<=1024)
    {
        refference_val=972.8;
        _delay_ms(20);
    }

    return 0;
}
