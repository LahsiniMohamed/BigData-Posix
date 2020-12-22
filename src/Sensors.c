/*
 * Sensors.c
 *
 *  Created on: Dec 21, 2020
 *      Author: lahsini
 */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Sensors.h"

void initSensor(int id ,int (*Operation)(void)){
	Sensor capteur ;
	capteur.id = id;
	capteur.valueGetter = Operation;

	SENSORS[id] = capteur;
}




