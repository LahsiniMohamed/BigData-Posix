/*
 * Main.c
 *
 *  Created on: Dec 21, 2020
 *      Author: lahsini
 */

#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include "CONFIG.h"
#include "TempSensor.h"
#include "Sensors.h"
#include "StatisticsCategories.h"
#include "Matrice.h"
#include "Statistics.h"
#include "Thread.h"
#include <time.h>

int main(void){
	pthread_t MatrixThread;
	bigMatrix = malloc(ROWS*COLS*sizeof(long));
	pthread_t threads[MAX_THREADS];
	pthread_t Thread;



	printf("setting up the sensors ...... \n");
	//staart sensors and initiate them
	startSensor();
	//and sensor setup
	printf("sensors are up !!!! \n");

	//starting the categories routine
	startCategories();
	printf("categories are up\n");


	//start filling the matrics
	printf("initiating the matrics thread  \n");
	//this function need to be on a seperate thread
	pthread_create(&MatrixThread,NULL,InitMatrics,1);

	//Starting the threads routine
	pthread_create(&Thread,NULL,StartThreads,1);

	pthread_join(Thread,NULL);
	pthread_join(MatrixThread,NULL);

	free(bigMatrix);
}

