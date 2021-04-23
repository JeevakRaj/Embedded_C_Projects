/**
 * @file activity1.h
 * @author Jeevak Raj
 * @brief Header file definition
 * @version 0.1
 * @date 2021-04-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef ACTIVITY_1_H
#define ACTIVITY_1_H


/**
 * Include files
 */ 
#include <avr/io.h>
#include <util/delay.h>


/**
 * Function Definitions
 */

/**
 * @brief Change the state of the LED Pin according to the value of state
 * 
 * @param state Pin level to which the LED Pin should be set
 */
void Heater_LED(void);


#endif 