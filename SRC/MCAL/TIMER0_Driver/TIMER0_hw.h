/*
 * TIMER0_hw.h
 *
 *  Created on: Jul 25, 2019
 *      Author: RS3
 */

#ifndef MY_REPO_SRC_MCAL_TIMER0_DRIVER_TIMER0_HW_H_
#define MY_REPO_SRC_MCAL_TIMER0_DRIVER_TIMER0_HW_H_

#define TCCR0				*((volatile uint8*)0x53)
#define TCNT0				*((volatile uint8*)0x52)
#define OCR0				*((volatile uint8*)0x5C)
#define TIMSK				*((volatile uint8*)0x59)
#define TIFR				*((volatile uint8*)0x58)

#endif /* MY_REPO_SRC_MCAL_TIMER0_DRIVER_TIMER0_HW_H_ */
