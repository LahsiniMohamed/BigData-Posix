/*
 * Statistics.c
 *
 *  Created on: Dec 22, 2020
 *      Author: lahsini
 */
#include <stdio.h>
#include <stdlib.h>
#include "statistics.h"

void initCategorie(int id,char name, double (*Calculator)(int[] )){
	Statistics categorie;
	categorie.id = id;
	categorie.name = name;
	categorie.valueGetter = Calculator;
	CATEGORIES[id] = categorie;
}



