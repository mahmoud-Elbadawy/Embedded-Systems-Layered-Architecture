/*
 * DIO_CFG.h
 *
 *  Created on: ??�/??�/????
 *      Author: mahmoud
 */

#ifndef DIO_CFG_H_
#define DIO_CFG_H_

#include "DIO_TYPES.h"
#include "../../LIB/STD_TYPES.h"

#define PIN_COUNT 32

void DIO_INIT();

typedef struct{
	DIO_DIRECTION_TYPE PIN_DIR;
	STD_LEVEL_TYPES PIN_LEVEL;
}DIO_PIN_CFG;

DIO_PIN_CFG PIN_CFG[] = {
		//PORTA
		{OUTPUT,STD_HIGH},//0
		{OUTPUT,STD_HIGH},//1
		{OUTPUT,STD_HIGH},//2
		{OUTPUT,STD_HIGH},//3
		{INPUT,STD_LOW},//4
		{OUTPUT,STD_HIGH},//5
		{OUTPUT,STD_HIGH},//6
		{OUTPUT,STD_HIGH},//7

		//PORTB
		{INPUT,STD_HIGH},//0
		{OUTPUT,STD_HIGH},//1
		{OUTPUT,STD_HIGH},//2
		{OUTPUT,STD_HIGH},//3
		{OUTPUT,STD_HIGH},//4
		{OUTPUT,STD_HIGH},//5
		{OUTPUT,STD_HIGH},//6
		{OUTPUT,STD_HIGH},//7

		//PORTC
		{OUTPUT,STD_HIGH},//0
		{OUTPUT,STD_HIGH},//1
		{INPUT,STD_LOW},//2
		{INPUT,STD_LOW},//3
		{INPUT,STD_LOW},//4
		{INPUT,STD_LOW},//5
		{OUTPUT,STD_HIGH},//6
		{OUTPUT,STD_HIGH},//7

		//PORTD
		{OUTPUT,STD_HIGH},//0
		{OUTPUT,STD_LOW},//1
		{OUTPUT,STD_HIGH},//2
		{OUTPUT,STD_HIGH},//3
		{OUTPUT,STD_HIGH},//4
		{OUTPUT,STD_LOW},//5
		{OUTPUT,STD_LOW},//6
		{OUTPUT,STD_HIGH}//7
};


#endif /* DIO_CFG_H_ */
