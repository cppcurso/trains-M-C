/*
 * Train.h
 *
 *  Created on: 13/03/2018
 *      Author: usuario
 */

#ifndef CLASSES_TRAIN_H_
#define CLASSES_TRAIN_H_
#include <chrono>
#include <thread>
#include "Line.h"

class Train {
	Line line;
	float speed;

public:
	unsigned int currentStop;
	Train (Line l, float s = 0, unsigned int cS = 0) : line(l), speed(s), currentStop(cS) {} // Constructor
	bool isGo();
	void move();
	void moveAllLine();
	void setSpeed(float speed);
};

#endif /* CLASSES_TRAIN_H_ */
