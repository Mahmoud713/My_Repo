/*
 * Port.c
 *
 *  Created on: Jul 17, 2019
 *      Author: RS3
 */
#include "../../utils/STD_types.h"
#include "../../utils/Bit_Math.h"
#include "../../Config/PORT_cfg.h"
#include "../PORT_Driver/PORT.h"
#include "../PORT_Driver/PORT_Types.h"
#include "../PORT_Driver/PORT_HW.h"

/****************************************************
 *                EXTERNS
 ****************************************************/
extern const PORT_PinType PORT_PinGroup[PORT_ACTIVATED_PINS_NUMBER];

/*********************************************************************
 * 			FUNCTIONS DEFINTIONS
 *
 * *******************************************************************/

void PORT_init(void)
{
	uint8 i;
	PORT_PortType PortId;
	PORT_ChannelType ChannelPos;
	PORT_PinModeType PinMode;
	PORT_PinDirType PinDir;
	for(i=0;i<PORT_ACTIVATED_PINS_NUMBER;i++)
	{
		PortId = (PORT_PinGroup[i].PinId) / 8;
		ChannelPos = (PORT_PinGroup[i].PinId) % 8;
		PinMode = PORT_PinGroup[i].PinMode;
		PinDir = PORT_PinGroup[i].PinDir;
		switch(PortId)
		{
		case PORT_PortA:
			if(PinDir == Dir_Output)
			{
				SET_BIT(DDRA_REG,ChannelPos);
			}
			else
			{
				CLR_BIT(DDRA_REG,ChannelPos);
				/* ACTIVATE MODE PULL UP RES */
				if(PinMode == Mode_Dio_With_Pullup_Res)
				{
					SET_BIT(DDRA_REG,ChannelPos);
				}
			}
			break;
		case PORT_PortB:
			if(PinDir == Dir_Output)
			{
				SET_BIT(DDRB_REG,ChannelPos);
			}
			else
			{
				CLR_BIT(DDRB_REG,ChannelPos);
				/*  ACTIVATE MOdE PULL UP RES */
				if(PinMode == Mode_Dio_With_Pullup_Res)
				{
					SET_BIT(DDRB_REG,ChannelPos);
				}
			}
			break;
		case PORT_PortC:
			if(PinDir == Dir_Output)
			{
				SET_BIT(DDRC_REG,ChannelPos);
			}
			else
			{
				CLR_BIT(DDRC_REG,ChannelPos);
				/*  ACTIVATE MOdE PULL UP RES */
				if(PinMode == Mode_Dio_With_Pullup_Res)
				{
					SET_BIT(DDRC_REG,ChannelPos);
				}
			}
			break;
		case PORT_PortD:
			if(PinDir == Dir_Output)
			{
				SET_BIT(DDRD_REG,ChannelPos);
			}
			else
			{
				CLR_BIT(DDRD_REG,ChannelPos);
				/*  ACTIVATE MOdE PULL UP RES */
				if(PinMode == Mode_Dio_With_Pullup_Res)
				{
					SET_BIT(DDRD_REG,ChannelPos);
				}
			}
			break;
		default:
			// Error //
			break;
		}

	}

}

