/*
 * DIO_HW.h
 *
 *  Created on: Jul 16, 2019
 *      Author: RS3
 */

#ifndef MY_REPO_SRC_MCAL_DIO_DRIVER_DIO_HW_H_
#define MY_REPO_SRC_MCAL_DIO_DRIVER_DIO_HW_H_

#define PORTA_REG      *((volatile uint8*)0x3B)
#define PORTB_REG      *((volatile uint8*)0x38)
#define PORTC_REG      *((volatile uint8*)0x35)
#define PORTD_REG      *((volatile uint8*)0x32)

#define PINA_REG       *((const volatile uint8*)0x39)
#define PINB_REG       *((const volatile uint8*)0x)
#define PINC_REG       *((const volatile uint8*)0x33)
#define PIND_REG       *((const volatile uint8*)0x30)


#endif /* MY_REPO_SRC_MCAL_DIO_DRIVER_DIO_HW_H_ */
