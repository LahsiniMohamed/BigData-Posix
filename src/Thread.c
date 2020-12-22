/*
 * Thread.c
 *
 *  Created on: Dec 21, 2020
 *      Author: lahsini
 */

#include <stdlib.h>
#include <stdio.h>
#include "CONFIG.h"
#include "Matrice.h"
#include "Statistics.h"
#include <pthread.h>

void StartThreads(){
	//creation des threads qui vont prendre les statistics
	pthread_t threads[3];
	for (int i=0;i<3;i++)
	  pthread_create(&threads[i],NULL,CATEGORIES[i].valueGetter,1);
	/* Display the values of the matrix */

	for (int i=0;i<3;i++) {
	  pthread_join(threads[i],NULL);
	}//fin for
	pthread_exit(NULL);
}
