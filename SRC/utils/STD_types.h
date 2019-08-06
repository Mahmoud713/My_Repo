/*
 * STD_types.h
 *
 *  Created on: Jul 16, 2019
 *      Author: RS3
 */

#ifndef MY_REPO_SRC_UTILS_STD_TYPES_H_
#define MY_REPO_SRC_UTILS_STD_TYPES_H_

typedef unsigned char uint8 ;
typedef unsigned short uint16 ;
typedef unsigned long uint32 ;

typedef signed char sint8 ;
typedef signed short sint16 ;
typedef signed long sint32 ;

typedef float float32 ;

typedef enum
{
	STD_low,
	STD_high
}STD_LevelType;

typedef enum
{
	false ,
	true
}boolean;

#define ENABLE                1
#define DISABLE               0
#endif /* MY_REPO_SRC_UTILS_STD_TYPES_H_ */
