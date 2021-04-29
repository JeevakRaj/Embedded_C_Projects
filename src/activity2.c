/**
 * @file activity2.c
 * @author jeevak 256040 
 * @brief To read the temp sensor values and display in RAM Table
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#define F_CPU 8000000UL
#include<avr/io.h>
#include<util/delay.h>

/**
 * @brief Reading the ADC channel (in this project i am using channel 0)

 * @param ch channel
 * @return uint16_t 
 */
uint16_t ReadADC(uint8_t ch)
{
    //Select ADC Channel ch must be 0-7
    ADMUX&=0xf8;
    ch=ch&0b00000111;
    ADMUX|=ch;
    //Start single conversion
    ADCSRA|=(1<<ADSC);
    //Wait for conversion to complete
    while(!(ADCSRA & (1<<ADIF)));
    //Clear ADIF by writing one to it
    ADCSRA|=(1<<ADIF);
    return(ADC);
}

/**
 * @brief Initializing the ADC
 * 
 */
void InitADC()
{
    ADMUX=(1<<REFS0);
    ADCSRA=(1<<ADEN)|(7<<ADPS0);
}

/**
 * @brief To read temperature values(potentiometer value as temp sensor is not available in simulide)
 * 
 * @return int 
 */
int activity2()
{
    InitADC();
    uint16_t temp;
    temp=ReadADC(0);
    _delay_ms(200);
    return 0;
}
