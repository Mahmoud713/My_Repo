/*
 * ADC_cfg.h
 *
 *  Created on: Jul 22, 2019
 *      Author: RS3
 */

#ifndef MY_REPO_SRC_CONFIG_ADC_CFG_H_
#define MY_REPO_SRC_CONFIG_ADC_CFG_H_

/*
 *ADC_Voltage_Reference_CLR_msk
 *ADC_Voltage_Vref_msk
 *ADC_Voltage_AVCC_msk
 *ADC_Voltage_2.56Vref_msk
 */
#define ADC_Voltage_Reference_msk             Select_Voltage_Reference_msk

/*
 * ADC_Auto_Trigger_Source_CLR_msk
 * ADC_FreeRunning_Mode_msk
 * ADC_AnalogComparator_Mode_msk
 * ADC_EX_Interrupte_Mode_msk
 * ADC_Timer0_CompMatch_Mode_msk
 * ADC_Timer0_OverFlow_Mode_msk
 * ADC_Timer1_CompMatch_Mode_msk
 * ADC_Timer1_OverFlow_Mode_msk
 * ADC_Timer1_CaptureEvent_Mode_msk
 */

#define ADC_Auto_Trigger_Source_msk           Select_Auto_Trigger_Soure_msk

/*
 * ADC_Prescaler_DivFR_CLR_msk
 * ADC_prescaler_2_default_DivFR_msk
 * ADC_Prescaler_2_DivFR_msk
 * ADC_Prescaler_4_DivFR_msk
 * ADC_Prescaler_8_DivFR_msk
 * ADC_Prescaler_16_DivFR_msk
 * ADC_Prescaler_32_DivFR_msk
 * ADC_Prescaler_64_DivFR_msk
 * ADC_Prescaler_128_DivFR_msk
 */

#define ADC_Prescaler_DivFR_msk               Select_Prescaler_DivFR_msk

/*
 * Auto_Trigger_EN   IF You Will Enable ACTIVE Free Running Mode
 * Auto_Trigger_DIS  IF You Will Disable ACTIVE Single Conversion Mode
 */
#define ADC_Set_Start_Convert              6
#define ADC_Auto_Trigger_EN                ENABLE


#endif /* MY_REPO_SRC_CONFIG_ADC_CFG_H_ */
