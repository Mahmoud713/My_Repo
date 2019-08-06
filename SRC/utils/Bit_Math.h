/*
 * Bit_Math.h
 *
 *  Created on: Jul 16, 2019
 *      Author: RS3
 */

#ifndef MY_REPO_SRC_UTILS_BIT_MATH_H_
#define MY_REPO_SRC_UTILS_BIT_MATH_H_

#define SET_BIT(u8var,BitNo)          u8var |= (1<< BitNo)
#define CLR_BIT(u8var,BitNo)          u8var &= (0<< BitNo)
#define TOGGEL_BIT(u8var,BitNo)       u8var ^= (1<< BitNo)
#define GET_BIT(u8Var,BitNo)		  (u8Var >> BitNo) & 0x01

#endif /* MY_REPO_SRC_UTILS_BIT_MATH_H_ */
