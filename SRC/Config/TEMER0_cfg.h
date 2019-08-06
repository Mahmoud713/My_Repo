/*
 * TEMER0_cfg.h
 *
 *  Created on: Jul 25, 2019
 *      Author: RS3
 */

#ifndef MY_REPO_SRC_CONFIG_TEMER0_CFG_H_
#define MY_REPO_SRC_CONFIG_TEMER0_CFG_H_

/*
 * TIMER0_Prescaler_ClrBit_msk      0b11111000
 * TIMER0_No_Prescaler_msk          0b00000001
 * TIMER0_Prescaler_8_msk           0b00000010
 * TIMER0_Prescaler_64_msk          0b00000011
 * TIMER0_Prescaler_256_msk         0b00000100
 * TIMER0_Prescaler_1024_msk        0b00000101
 */

#define TIMER0_PrescalerType_Selector_msk          TIMER0_Prescaler_1024_msk
#define TIMER0_Steps_To_Count                      156


/*
 * TIMER0_ClrBit_msk                  0b10110111
 * TIMER0_NormalMode_msk              0b00000000
 * TIMER0_PWM_PhaseCorrectMode_msk    0b01000000
 * TIMER0_CTCMode_msk                 0b00001000
 * TIMER0_PWM_FastPwmMode_msk         0b01001000
 */
#define TIMER0_GenerationMode_Selector_msk         TIMER0_CTCMode_msk

/*
 *TIMER0_OutPutMode_NonPWM_Normale_Clr_msk            0b11001111
 *TIMER0_OutPutMode_NonPWM_ToggelMode_msk             0b00010000
 *TIMER0_OutPutMode_NonPWM_CLRMode_msk                0b00100000
 *TIMER0_OutPutMode_NonPWM_SetMode_msk                0b00110000
 */

#define TIMER0_OutPutMode_NonPWM_Selector_msk         TIMER0_OutPutMode_NonPWM_ToggelMode_msk

/*
 *TIMER0_OutPutMode_FastPWM_Normale_Clr_msk                    0b11001111
 *TIMER0_OutPutMode_FastPWM_Reserved_msk                       0b00010000
 *TIMER0_OutPutMode_FastPWM_CLRMode_nin_inverting_msk         0b00100000
 *TIMER0_OutPutMode_FastPWM_SetMode_inverting_msk             0b00110000
 */

#define TIMER0_OutPutMode_FastPWM_Selector_msk        TIMER0_OutPutMode_FastPWM_CLRMode_nin_inverting_msk

/*
 *TIMER0_OutPutMode_PhasePWM_Normale_Clr_msk                    0b11001111
 *TIMER0_OutPutMode_PhasePWM_Reserved_msk                       0b00010000
 *TIMER0_OutPutMode_PhasePWM_CLRMode_Up_down_counting_msk       0b00100000
 *TIMER0_OutPutMode_PhasePWM_SetMode_Up_down_counting_msk       0b00110000
 */
#define TIMER0_OutPutMode_PhasePWM_Selector_msk       TIMER0_OutPutMode_PhasePWM_CLRMode_Up_down_counting_msk
#endif /* MY_REPO_SRC_CONFIG_TEMER0_CFG_H_ */
