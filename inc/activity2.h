/**
 * @file activity2.h
 * @author jeevak 256040 
 * @brief To read the temp sensor values and display in RAM Table
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef ACTIVITY_2_H
#define ACTIVITY_2_H

/**
 * @brief Reading the ADC channel (in this project i am using channel 0)
 * 
 * @return uint16_t 
 */
uint16_t ReadADC(uint8_t);

/**
 * @brief Initializing the ADC
 * 
 */
void InitADC();

/**
 * @brief To read temperature values(potentiometer value as temp sensor is not available in simulide)
 * 
 * @return int 
 */
int activity2();

#endif