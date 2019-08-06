/*
 * PORT_lcfg.c
 *
 *  Created on: Jul 18, 2019
 *      Author: RS3
 */

#include "../MCAL/PORT_Driver/PORT_Types.h"
#include "../Config/PORT_cfg.h"

const PORT_PinType PORT_PinGroup[PORT_ACTIVATED_PINS_NUMBER]=
{

		/*=============GroupA===============*/


		{Port_Channel_A0, Mode_Dio, Dir_Output},
		{Port_Channel_A1, Mode_Dio, Dir_Output},
		{Port_Channel_A2, Mode_Dio, Dir_Output},
		{Port_Channel_A3, Mode_Dio, Dir_Output},
		{Port_Channel_A4, Mode_Dio, Dir_Output},
		{Port_Channel_A5, Mode_Dio, Dir_Output},
		{Port_Channel_A6, Mode_Dio, Dir_Output},
		{Port_Channel_A7, Mode_Dio, Dir_Output},

		/*=============GroupB===============*/

		{Port_Channel_B0, Mode_Dio, Dir_Output},
		{Port_Channel_B1, Mode_Dio, Dir_Output},
		{Port_Channel_B2, Mode_Dio, Dir_Output},
		{Port_Channel_B3, Mode_Dio, Dir_Output},
		{Port_Channel_B4, Mode_Dio, Dir_Output},
		{Port_Channel_B5, Mode_Dio, Dir_Output},
		{Port_Channel_B6, Mode_Dio, Dir_Output},
		{Port_Channel_B7, Mode_Dio, Dir_Output},

		/*=============GroupC===============*/

		{Port_Channel_C0, Mode_Dio, Dir_Output},
		{Port_Channel_C1, Mode_Dio, Dir_Output},
		{Port_Channel_C2, Mode_Dio, Dir_Output},
		{Port_Channel_C3, Mode_Dio, Dir_Output},
		{Port_Channel_C4, Mode_Dio, Dir_Output},
		{Port_Channel_C5, Mode_Dio, Dir_Output},
		{Port_Channel_C6, Mode_Dio, Dir_Output},
		{Port_Channel_C7, Mode_Dio, Dir_Output},

		/*=============GroupD===============*/

		{Port_Channel_D0, Mode_Dio, Dir_Output},
		{Port_Channel_D1, Mode_Dio, Dir_Output},
		{Port_Channel_D2, Mode_Dio, Dir_Output},
		{Port_Channel_D3, Mode_Dio, Dir_Output},
		{Port_Channel_D4, Mode_Dio, Dir_Output},
		{Port_Channel_D5, Mode_Dio, Dir_Output},
		{Port_Channel_D6, Mode_Dio, Dir_Output},
		{Port_Channel_D7, Mode_Dio, Dir_Output}

};
