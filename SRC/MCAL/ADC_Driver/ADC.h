/*
 * ADC.h
 *
 *  Created on: Jul 22, 2019
 *      Author: RS3
 */

#ifndef MY_REPO_SRC_MCAL_ADC_DRIVER_ADC_H_
#define MY_REPO_SRC_MCAL_ADC_DRIVER_ADC_H_

#include "../../utils/STD_types.h"
#include "ADC_Types.h"

void ADC_init(void);
void ADC_SetChannel(ADC_ChannelType ChannelId);
uint16 ADC_ReadChannel(void);
void ADC_ENInterrupt(void);
void ADC_DIInterrupt(void);

#endif /* MY_REPO_SRC_MCAL_ADC_DRIVER_ADC_H_ */
