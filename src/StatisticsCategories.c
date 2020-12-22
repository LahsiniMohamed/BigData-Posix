/*
 * StatisticsCategories.c
 *
 *  Created on: Dec 22, 2020
 *      Author: lahsini
 */

#include<stdio.h>
#include<stdlib.h>
#include "statistics.h"

double tempsMoyen(int Matrix[]){
	printf("ici le moyen de la matrice \n");
	return 0;
}

double ecartType(int Matrix[]){
	printf("ici ecart-type de la matrice \n");
	return 0;
}
double tempsMedian(int Matrix[]){
	printf("ici le median de la matrice \n");
	return 0;
}
void startCategories(){
	initCategorie(0, "temps Moyen", tempsMoyen);
	initCategorie(1, "ecart Type", ecartType);
	initCategorie(2, "temps Medin", tempsMedian );
	printf("categories started");
}


