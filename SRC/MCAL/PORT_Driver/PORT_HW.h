/*
 * Port_HW.h
 *
 *  Created on: Jul 17, 2019
 *      Author: RS3
 */

#ifndef MY_REPO_SRC_MCAL_PORT_DRIVER_PORT_HW_H_
#define MY_REPO_SRC_MCAL_PORT_DRIVER_PORT_HW_H_

#define DDRA_REG     *((volatile uint8*)0x3A)
#define DDRB_REG     *((volatile uint8*)0x37)
#define DDRC_REG     *((volatile uint8*)0x34)
#define DDRD_REG     *((volatile uint8*)0x31)


#define PORTA_REG		*((volatile uint8*)0x3B)
#define PORTB_REG		*((volatile uint8*)0x38)
#define PORTC_REG		*((volatile uint8*)0x35)
#define PORTD_REG		*((volatile uint8*)0x32)

#endif /* MY_REPO_SRC_MCAL_PORT_DRIVER_PORT_HW_H_ */
