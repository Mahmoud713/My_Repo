/*
 * 1st_Task01.c
 *
 *  Created on: Jul 19, 2019
 *      Author: RS3
 */
#include "../MCAL/PORT_Driver/PORT.h"
#include "../MCAL/DIO_Driver/DIO.h"
#include "Avr/delay.h"


void  Task01(void)
{

	STD_LevelType CurrStatus = STD_low,
			PrevStatus = STD_low;
	PORT_init();
	while(1)
	{
		CurrStatus = Dio_ReadChannel(Dio_Channel_D0);

		if(CurrStatus == STD_high)
		{
			if(PrevStatus == STD_low)
			{
				Dio_FlipChannel(Dio_Channel_D5);
				_delay_ms(100);

			}
		}
		else
		{

		}
		PrevStatus = CurrStatus;

	};
}
