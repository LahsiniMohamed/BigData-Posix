/*
 * Sensors.h
 *
 *  Created on: Dec 21, 2020
 *      Author: lahsini
 */

#ifndef SENSORS_H_
#define SENSORS_H_

#include "CONFIG.h"

struct SensorTag ; /* Forward declaration */

typedef   int (*Operation)(void);

typedef  struct SensorTag{

       int  id ;
       Operation  valueGetter; // funtion pointer

 } Sensor;
Sensor SENSORS[COLS];

void initSensor(int id , int (*Operation)(void));






#endif /* SENSORS_H_ */
