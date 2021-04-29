/**
 * @file SeatHeatingApp.c
 * @author Jeevak 256040
 * @brief Combined All four activities
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#define F_CPU 8000000UL
#include <avr/io.h>
#include <util/delay.h>
#include "activity1.h"
#include "activity2.h"
#include "activity3.h"
#include "activity4.h"

/**
 * @brief main function
 * 
 * @return int 
 */
int main()
{
    uint16_t temp1=0;
    while(1)
    {
        int res1=activity1();
        if(res1==0)
        {
            activity2();
            int res2=activity3();
            if(res2==0)
            {
                temp1=activity4(temp1);
            }
        }
    }
    return 0;
}