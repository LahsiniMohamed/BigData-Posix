/*
 * TempSensor.c
 *
 *  Created on: Dec 21, 2020
 *      Author: lahsini
 */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Sensors.h"
#include "CONFIG.h"

int getValue(){
	srand( time(NULL) );
	int Value = rand();
	return Value;
};
void startSensor(){
	int id ;
	for (int i = 0 ; i<COLS ; i++){
		id = i;
		initSensor(id , getValue);
	}
	printf("sensor started");
}


