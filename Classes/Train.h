/*
 * Train.h
 *
 *  Created on: 13/03/2018
 *      Author: usuario
 */

#ifndef CLASSES_TRAIN_H_
#define CLASSES_TRAIN_H_
#include "Line.h"
#include <mutex>

class Train {
	Line* line;
	string nameTrain;
	float speed;
	unsigned int currentStop;
	void move();
	void stop();
public:
	Train(Line* l, string nT, float s = 0, unsigned int cS = 0) : line(l), nameTrain(nT), speed(s), currentStop(cS) {}
	bool isGo();
	void moveAllLine();
	void setSpeed(float speed);
	unsigned int getCurrentStop() const;

};

#endif /* CLASSES_TRAIN_H_ */
