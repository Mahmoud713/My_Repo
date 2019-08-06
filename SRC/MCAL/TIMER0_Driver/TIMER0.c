/*
 * TIMER0.c
 *
 *  Created on: Jul 25, 2019
 *      Author: RS3
 */
/*
 * =============================================
 * Private Defines
 * ============================================*/


/*==============================================
 * TIMER0_PrescalerType_Selector_msk
  ==============================================*/

#define TIMER0_Prescaler_ClrBit_msk      0b11111000
#define TIMER0_No_Prescaler_msk          0b00000001
#define TIMER0_Prescaler_8_msk           0b00000010
#define TIMER0_Prescaler_64_msk          0b00000011
#define TIMER0_Prescaler_256_msk         0b00000100
#define TIMER0_Prescaler_1024_msk        0b00000101

/*===============================================
 * TIMER0_GenerationMode_Selector_msk
  ===============================================*/
#define TIMER0_ClrBit_msk                  0b10110111
#define TIMER0_NormalMode_msk              0b00000000
#define TIMER0_PWM_PhaseCorrectMode_msk    0b01000000
#define TIMER0_CTCMode_msk                 0b00001000
#define TIMER0_PWM_FastPwmMode_msk         0b01001000

/*================================================
 * TIMER0_OutPutMode_NonPWM_Selector_msk
  ================================================*/
#define TIMER0_OutPutMode_NonPWM_Normale_Clr_msk            0b11001111
#define TIMER0_OutPutMode_NonPWM_ToggelMode_msk             0b00010000
#define TIMER0_OutPutMode_NonPWM_CLRMode_msk                0b00100000
#define TIMER0_OutPutMode_NonPWM_SetMode_msk                0b00110000

/*================================================
 * TIMER0_OutPutMode_FastPWM_Selector_msk
  ================================================*/
#define TIMER0_OutPutMode_FastPWM_Normale_Clr_msk                    0b11001111
#define TIMER0_OutPutMode_FastPWM_Reserved_msk                       0b00010000
#define TIMER0_OutPutMode_FastPWM_CLRMode_nin_inverting_msk         0b00100000
#define TIMER0_OutPutMode_FastPWM_SetMode_inverting_msk             0b00110000

/*================================================
 * TIMER0_OutPutMode_PhasePWM_Selector_msk
  ================================================*/
#define TIMER0_OutPutMode_PhasePWM_Normale_Clr_msk                    0b11001111
#define TIMER0_OutPutMode_PhasePWM_Reserved_msk                       0b00010000
#define TIMER0_OutPutMode_PhasePWM_CLRMode_Up_down_counting_msk       0b00100000
#define TIMER0_OutPutMode_PhasePWM_CLRMode_Up_down_counting_msk       0b00110000

#include "../../utils/Bit_Math.h"
#include "../../utils/STD_types.h"
#include "../../Config/TEMER0_cfg.h"
#include "TIMER0.h"
#include "TIMER0_hw.h"


void TIMER0_init(void)
{





	/* set GenerationMode */
	TCCR0 &= TIMER0_ClrBit_msk;
	TCCR0 |= TIMER0_GenerationMode_Selector_msk;

#if TIMER0_GenerationMode_Selector_msk == (TIMER0_NormalMode_msk) || TIMER0_GenerationMode_Selector_msk == (TIMER0_CTCMode_msk)
	/* set OutPutMode_NonPWM */
	TCCR0 &= TIMER0_OutPutMode_NonPWM_Normale_Clr_msk;
	TCCR0 |= TIMER0_OutPutMode_NonPWM_Selector_msk;
#elif TIMER0_GenerationMode_Selector_msk == (TIMER0_PWM_PhaseCorrectMode_msk) || TIMER0_GenerationMode_Selector_msk == (TIMER0_PWM_FastPwmMode_msk)
	/* set OutPutMode_FastPWM */
	TCCR0 &= TIMER0_OutPutMode_FastPWM_Normale_Clr_msk;
	TCCR0 |= TIMER0_OutPutMode_FastPWM_Selector_msk;
	/* set OutPutMode_PhasePWM */
	TCCR0 &= TIMER0_OutPutMode_PhasePWM_Normale_Clr_msk;
	TCCR0 |= TIMER0_OutPutMode_PhasePWM_Selector_msk;
#endif
	/*set PreScaler */
	TCCR0 &= TIMER0_Prescaler_ClrBit_msk ;
	TCCR0 |= TIMER0_PrescalerType_Selector_msk;
	/* set Steps count */
	TIMER0_setCounterSteps(TIMER0_Steps_To_Count);


}
void TIMER0_enInterrupt(void)
{
#if TIMER0_GenerationMode_Selector_msk == TIMER0_NormalMode_msk
	SET_BIT(TIMSK,0);
#elif TIMER0_GenerationMode_Selector_msk  == TIMER0_CTCMode_msk
	SET_BIT(TIMSK,1);
#endif
}
void TIMER0_diInterrupt(void)
{
#if TIMER0_GenerationMode_Selector_msk == TIMER0_NormalMode_msk
	CLR_BIT(TIMSK,0);
#elif TIMER0_GenerationMode_Selector_msk  == TIMER0_CTCMode_msk
	CLR_BIT(TIMSK,1);
#endif
}
void TIMER0_setCounterSteps(uint8 StepsToCount)
{
#if TIMER0_GenerationMode_Selector_msk == TIMER0_CTCMode_msk
	OCR0 = StepsToCount;
#elif TIMER0_GenerationMode_Selector_msk == TIMER0_NormalMode_msk
	TCNT0 = 255 - StepsToCount;
#endif
}
uint8 TIMER0_readCounterSteps(void)
{
	uint8 ret ;
	ret = TCNT0;
	return ret ;
}





















