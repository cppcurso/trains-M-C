/*
 * Stop.h
 *
 *  Created on: 13/03/2018
 *      Author: usuario
 */

#ifndef CLASSES_STOP_H_
#define CLASSES_STOP_H_
#include <iostream>
using namespace std;

class Stop {
	string nameStop;
	unsigned int distanceToNext;
public:
	Stop(string nS, unsigned int dTN) : nameStop(nS), distanceToNext(dTN) {}


};

#endif /* CLASSES_STOP_H_ */
