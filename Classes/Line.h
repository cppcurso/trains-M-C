/*
 * Line.h
 *
 *  Created on: 13/03/2018
 *      Author: usuario
 */

#ifndef CLASSES_LINE_H_
#define CLASSES_LINE_H_
#include <vector>
#include <typeinfo>
#include "Stop.h"


class Line {
	vector<Stop>stops;
public:
	Line();
	void addStop(Stop stop);
	Stop getStop(unsigned int index);
	Stop findStop(string name);
	unsigned int getNumberStops();
};

#endif /* CLASSES_LINE_H_ */
