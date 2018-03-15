/*
 * Line.cpp
 *
 *  Created on: 13/03/2018
 *      Author: usuario
 */

#include "Line.h"

Line::Line() {

}

void Line::addStop(Stop* stop) {
	stops.push_back(stop);
}

Stop* Line::getStop(unsigned int index) {
	if (index > stops.size()) {
		throw "Fuera de rango";
	}
	return stops[index];
}

Stop* Line::findStop(string name) {
	for (unsigned int i = 0; i < stops.size(); i++) {
		if (name == stops[i]->getNameStop()) {
			Stop* stop = new Stop(stops[i]->getNameStop());
			return stop;
		}
	}
}

unsigned int Line::getNumberStops() {
	return stops.size();
}

void Line::printLine() {
	for(unsigned int i = 0; i < stops.size(); i++) {
		cout << stops[i] << endl;
	}
}
