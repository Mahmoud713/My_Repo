/*
 * ADC.c
 *
 *  Created on: Jul 22, 2019
 *      Author: RS3
 */

/*
 * =============================================
 * Private Defines
 * ============================================*/

/***********************************************
 *      ADC_Voltage_Reference_msks
 ***********************************************/

#define ADC_Voltage_Reference_CLR_msk          0b00111111
#define ADC_Voltage_Vref_msk                   0b00000000
#define ADC_Voltage_AVCC_msk                   0b01000000
#define ADC_Voltage_2.56Vref_msk               0b11000000

/***********************************************
 *    ADC_Auto_Trigger_Source_msks
 ***********************************************/

#define ADC_Auto_Trigger_Source_CLR_msk        0b00011111
#define ADC_FreeRunning_Mode_msk               0b00000000
#define ADC_AnalogComparator_Mode_msk          0b00100000
#define ADC_EX_Interrupte_Mode_msk             0b01000000
#define ADC_Timer0_CompMatch_Mode_msk          0b01100000
#define ADC_Timer0_OverFlow_Mode_msk           0b10000000
#define ADC_Timer1_CompMatch_Mode_msk          0b10100000
#define ADC_Timer1_OverFlow_Mode_msk           0b11000000
#define ADC_Timer1_CaptureEvent_Mode_msk       0b11100000

/*******************************************
 *    ADC_Prescaler_DivFR_msks
 *******************************************/
#define ADC_Prescaler_DivFR_CLR_msk            0b11111000
#define ADC_prescaler_2_default_DivFR_msk      0b00000000
#define ADC_Prescaler_2_DivFR_msk              0b00000001
#define ADC_Prescaler_4_DivFR_msk              0b00000010
#define ADC_Prescaler_8_DivFR_msk              0b00000011
#define ADC_Prescaler_16_DivFR_msk             0b00000100
#define ADC_Prescaler_32_DivFR_msk             0b00000101
#define ADC_Prescaler_64_DivFR_msk             0b00000110
#define ADC_Prescaler_128_DivFR_msk            0b00000111



#include "../../utils/Bit_Math.h"
#include "../../utils/STD_types.h"
#include "../../Config/ADC_cfg.h"
#include "ADC.h"
#include "ADC_HW.h"
#include "ADC_Types.h"


void ADC_init(void)
{

	/* set Voltage_Reference */
	ADMUX_REG &= ADC_Voltage_Reference_CLR_msk ;
	ADMUX_REG |= ADC_Voltage_Vref_msk ;
	/* set Left adjust OR Right */
	/* ADC Enable */
	SET_BIT(ADCSRA_REG , 7);
	/* Set Start Convert */
	SET_BIT(ADCSRA_REG,ADC_Set_Start_Convert);
	/* Auto_Trigger_Source */
	SFLORE_REG &= ADC_Auto_Trigger_Source_CLR_msk ;

#if  ADC_Auto_Trigger_EN == ENABLE

	SFLORE_REG |= ADC_FreeRunning_Mode_msk ;

#endif
	/* Prescaler_DivFR */
	ADCSRA_REG &= ADC_Prescaler_DivFR_CLR_msk ;
	ADCSRA_REG |= ADC_prescaler_2_default_DivFR_msk ;
}
void ADC_SetChannel(ADC_ChannelType ChannelId)
{
	switch( ChannelId ){

	case ADC0_Channel_A0:
		SET_BIT(ADMUX_REG, ADC0_Channel_A0);
		break;
	case ADC1_Channel_A1:
		SET_BIT(ADMUX_REG,ADC1_Channel_A1);
		break;
	case ADC2_Channel_A2:
		SET_BIT(ADMUX_REG, ADC2_Channel_A2);
		break;
	case ADC3_Channel_A3:
		SET_BIT(ADMUX_REG, ADC3_Channel_A3);
		break;
	case ADC4_Channel_A4:
		SET_BIT(ADMUX_REG,ADC4_Channel_A4);
		break;
	case ADC5_Channel_A5:
		SET_BIT(ADMUX_REG, ADC5_Channel_A5);
		break;
	case ADC6_Channel_A6:
		SET_BIT(ADMUX_REG,ADC6_Channel_A6);
		break;
	case ADC7_Channel_A7:
		SET_BIT(ADMUX_REG, ADC7_Channel_A7);
		break;
	default :
		break;
	}
}
uint16 ADC_ReadChannel(void)
{
	while( GET_BIT(ADCSRA_REG,4) == 0 )
	{
		;
	}
	return ADC_REG ;
}
void ADC_ENInterrupt(void)
{
	SET_BIT(ADCSRA_REG,3);
}
void ADC_DIInterrupt(void)
{
	CLR_BIT(ADCSRA_REG, 3);
}
