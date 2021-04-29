/**
 * @file activity4.h
 * @author jeevak 256040
 * @brief sending the values to Serial monitor
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef ACTIVITY_4_H
#define ACTIVITY_4_H

/**
 * @brief Initializing the USART Value
 * 
 */
void USARTInit(char);

/**
 * @brief Writing character value to USART
 * 
 */
void USARTWriteChar(char);

/**
 * @brief Sending string to USART (that is using a for loop and sending character by character)
 * 
 */
void UART_SendString(char *);

/**
 * @brief Displaying the temp values to Serial monitor
 * 
 * @return int 
 */
int activity4(int);

#endif