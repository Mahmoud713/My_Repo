/*
 * ADC_HW.h
 *
 *  Created on: Jul 22, 2019
 *      Author: RS3
 */

#ifndef MY_REPO_SRC_MCAL_ADC_DRIVER_ADC_HW_H_
#define MY_REPO_SRC_MCAL_ADC_DRIVER_ADC_HW_H_

#define ADMUX_REG         *((volatile uint8*)0x27)
#define ADCSRA_REG        *((volatile uint8*)0x26)
#define ADC_REG           *((volatile uint16*)0x24)
#define SFLORE_REG        *((volatile uint8*)0x250)

#endif /* MY_REPO_SRC_MCAL_ADC_DRIVER_ADC_HW_H_ */
