/*
 * DIO.c
 *
 *  Created on: Jul 16, 2019
 *      Author: RS3
 */
#include "../../utils/Bit_Math.h"
#include "../../utils/STD_types.h"
#include "../../MCAL/DIO_Driver/DIO.h"
#include "../../MCAL/DIO_Driver/DIO_HW.h"
#include "../../MCAL/DIO_Driver/DIO_Types.h"


#ifndef MY_REPO_SRC_MCAL_DIO_DRIVER_DIO_C_
#define MY_REPO_SRC_MCAL_DIO_DRIVER_DIO_C_

STD_LevelType Dio_ReadChannel(Dio_ChannelType ChannelId)
{
	STD_LevelType ret;
	Dio_PortType PortId = ChannelId / 8 ;
	Dio_ChannelType Channelpos = ChannelId % 8 ;

	switch(PortId)
	{
	case Dio_PortA:
		ret = GET_BIT(PORTA_REG, Channelpos);
		break;
	case Dio_PortB:
		ret = GET_BIT(PORTB_REG, Channelpos);
		break;
	case Dio_PortC:
		ret = GET_BIT(PORTC_REG, Channelpos);
		break;
	case Dio_PortD:
		ret = GET_BIT(PORTD_REG, Channelpos);
		break;
	default :
		// Error //
		ret =2;
		break;
	}
	return ret;
}
void Dio_WriteChannel(Dio_ChannelType ChannelId , STD_LevelType Level)

{
	Dio_PortType PortId = ChannelId /8;
	Dio_ChannelType ChannelPos = ChannelId %8;

	switch(PortId)
	{
	case Dio_PortA:
		if(Level == STD_low)
		{
			CLR_BIT(PORTA_REG, ChannelPos);
		}
		else
		{
			SET_BIT(PORTA_REG, ChannelPos);
		}
		break;

	case Dio_PortB:
		if(Level == STD_low)
		{
			CLR_BIT(PORTB_REG, ChannelPos);
		}
		else
		{
			SET_BIT(PORTB_REG, ChannelPos);
		}
		break;

	case Dio_PortC:
		if(Level == STD_low)
		{
			CLR_BIT(PORTC_REG, ChannelPos);
		}
		else
		{
			SET_BIT(PORTC_REG, ChannelPos);
		}
		break;

	case Dio_PortD:
		if(Level == STD_low)
		{
			CLR_BIT(PORTD_REG, ChannelPos);
		}
		else
		{
			SET_BIT(PORTD_REG, ChannelPos);
		}
		break;

	default:
		// Error //
		break;
	};

}

uint8 Dio_ReadPort(Dio_PortType PortId)
{
	uint8 ret;
	switch(PortId)
	{
	case Dio_PortA:
		ret = PORTA_REG;
		break;
	case Dio_PortB:
		ret = PORTB_REG;
		break;
	case Dio_PortC:
		ret = PORTC_REG;
		break;
	case Dio_PortD:
		ret = PORTD_REG;
		break;
	default:
		// Error //
		break;
	}
	return ret;
};
void Dio_WritePort(Dio_PortType PortId , uint8 Level)
{
	switch(PortId)
	{
	case Dio_PortA:
		PORTA_REG = Level;
		break;
	case Dio_PortB:
		PORTB_REG = Level;
		break;
	case Dio_PortC:
		PORTC_REG = Level;
		break;
	case Dio_PortD:
		PORTD_REG = Level;
		break;
	default:
		// Error //
		break;
	}
};
void Dio_FlipChannel(Dio_ChannelType ChannelId)
{
	Dio_PortType PortId = ChannelId /8;
	Dio_ChannelType ChannelPos = ChannelId %8;

	switch(PortId)
	{
	case Dio_PortA:
		TOGGEL_BIT(PORTA_REG, ChannelPos);
		break;
	case Dio_PortB:
		TOGGEL_BIT(PORTB_REG, ChannelPos);
		break;
	case Dio_PortC:
		TOGGEL_BIT(PORTC_REG, ChannelPos);
		break;
	case Dio_PortD:
		TOGGEL_BIT(PORTD_REG, ChannelPos);
		break;
	default:
		// Error //
		break;
	}
};




void Dio_FlipPort(Dio_PortType PortId)
{
	switch(PortId)
	{
	case Dio_PortA:
		PORTA_REG = ~ PORTA_REG;
		break;
	case Dio_PortB:
		PORTB_REG = ~ PORTB_REG;
		break;
	case Dio_PortC:
		PORTC_REG = ~ PORTC_REG;
		break;
	case Dio_PortD:
		PORTD_REG = ~ PORTD_REG;
		break;
	default:
		// Error //
		break;
	}
};

#endif /* MY_REPO_SRC_MCAL_DIO_DRIVER_DIO_C_ */
