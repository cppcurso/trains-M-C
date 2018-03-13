/*
 * Train.cpp
 *
 *  Created on: 13/03/2018
 *      Author: usuario
 */

#include "Train.h"

Train::Train() : speed(0), line(){}

void Train::go(){
	speed = 1;
}

void Train::stop(){
	speed = 0;
}
