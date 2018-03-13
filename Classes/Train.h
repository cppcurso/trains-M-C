/*
 * Train.h
 *
 *  Created on: 13/03/2018
 *      Author: usuario
 */

#ifndef CLASSES_TRAIN_H_
#define CLASSES_TRAIN_H_
#include "Line.h"

class Train {
	float speed;
	Line line;

	Train ();// Constructor
	void go();
	void stop();
};

#endif /* CLASSES_TRAIN_H_ */
