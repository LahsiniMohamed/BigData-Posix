/*
 * Matrice.c
 *
 *  Created on: Dec 21, 2020
 *      Author: lahsini
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include  "Matrice.h"
#include "CONFIG.h"
#include "Sensors.h"


void InitMatrics(){
	clock_t time = clock();
	int i = 0;
	int j = 0;

	for (i=0;i<ROWS;i++){
	  for (j=0;j<COLS;j++){
	    	 printf("getting value \n");
	     bigMatrix[i*COLS+j]=SENSORS[j].valueGetter();
	 	time = clock();
    	printf("........... \n");
	    do{
	    }while(clock()-time<INTERVAL);

	  }

	  }
	printf("matrix is full \n");
}

void ShowMatrics(){
	int i,j;
	for (i=0;i<ROWS;i++){
	  for (j=0;j<COLS;j++){
	     bigMatrix[i*COLS+j]=i+COLS*j;
	  }
	  }
	  printf("Your matrix is as follows:\n");
	  for (i=0;i<ROWS;i++) {
	  printf("[");
	  for (j=0;j<COLS;j++){
	    printf("%ld:",bigMatrix[i*COLS+j]);
	  printf("]\n");
	}//fin for
	  }
	free(bigMatrix);
}
