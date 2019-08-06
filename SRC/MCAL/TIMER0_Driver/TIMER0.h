/*
 * TIMER0.h
 *
 *  Created on: Jul 25, 2019
 *      Author: RS3
 */

#ifndef MY_REPO_SRC_MCAL_TIMER0_DRIVER_TIMER0_H_
#define MY_REPO_SRC_MCAL_TIMER0_DRIVER_TIMER0_H_

void TIMER0_init(void);
void TIMER0_enInterrupt(void);
void TIMER0_diInterrupt(void);
void TIMER0_setCounterSteps(uint8 StepsToCount);
uint8 TIMER0_readCounterSteps(void);

#endif /* MY_REPO_SRC_MCAL_TIMER0_DRIVER_TIMER0_H_ */
