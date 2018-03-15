/*
 * Stop.cpp
 *
 *  Created on: 13/03/2018
 *      Author: usuario
 */

#include "Stop.h"

const string& Stop::getNameStop() const {
	return nameStop;
}

unsigned int Stop::getDistanceToNext() const {
	return distanceToNext;
}

void Stop::setDistanceToNext(unsigned int distanceToNext) {
	this->distanceToNext = distanceToNext;
}

/*mutex Stop::getmStop() {
	return mStop;
}*/
