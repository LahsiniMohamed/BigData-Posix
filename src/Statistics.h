/*
 * Statistics.h
 *
 *  Created on: Dec 22, 2020
 *      Author: lahsini
 */

#ifndef STATISTICS_H_
#define STATISTICS_H_

typedef   double (*Calculator)(int[]);
struct StatisticTag;

typedef  struct StatisticTag{

		int id;
       char name ;
       Calculator  valueGetter; // funtion pointer

 } Statistics;

 Statistics CATEGORIES[3];

 void initCategorie(int id,char name, double (*Calculator)(int[] ));



#endif /* STATISTICS_H_ */
