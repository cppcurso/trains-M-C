/*
 * Line.cpp
 *
 *  Created on: 13/03/2018
 *      Author: usuario
 */

#include "Line.h"

Line::Line(){

}

void Line::addStop(Stop stop) {
	stops.push_back(stop);
}

Stop Line::getStop(unsigned int index) {
	if (index > stops.size()) {
		throw "Fuera de rango";
	}
	return stops[index];
}

Stop Line::findStop(string name) {
	vector<Stop>::iterator it;
	for (it = stops.begin(); it < stops.end(); it++) {
		if (name == it->getNameStop()) {
			return Stop (it->getNameStop());
		}
	}
}

unsigned int Line::getNumberStops(){
	return stops.size();
}
