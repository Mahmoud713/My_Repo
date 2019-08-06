/*
 * Dio.h
 *
 *  Created on: Jul 16, 2019
 *      Author: RS3
 */
#include "D:/E15_Embedded_Development_Tools/workspace/My_Tasks/my_repo/SRC/MCAL/DIO_Driver/DIO_Types.h"
#include "D:/E15_Embedded_Development_Tools/workspace/My_Tasks/my_repo/SRC/utils/STD_types.h"

#ifndef MY_REPO_SRC_MCAL_DIO_DRIVER_DIO_H_
#define MY_REPO_SRC_MCAL_DIO_DRIVER_DIO_H_

STD_LevelType Dio_ReadChannel(Dio_ChannelType ChannelId);
void Dio_WriteChannel(Dio_ChannelType ChannelId , STD_LevelType Level);
uint8 Dio_ReadPort(Dio_PortType PortlId);
void Dio_WritePort(Dio_PortType PortId , uint8 Level);
void Dio_FlipChannel(Dio_ChannelType ChannelId);
void Dio_FlipPort(Dio_PortType PortId);

#endif /* MY_REPO_SRC_MCAL_DIO_DRIVER_DIO_H_ */
