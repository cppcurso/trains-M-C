/*
 * Train.cpp
 *
 *  Created on: 13/03/2018
 *      Author: usuario
 */

#include "Train.h"

bool Train::isGo() {
	if (speed == 0) return false;
	return true;
}

unsigned int Train::getCurrentStop() const {
	return currentStop;
}

void Train::setSpeed(float speed) {
	this->speed = speed;
}

void Train::move() {
	for (unsigned int i = 0; i < line.getStop(currentStop).getDistanceToNext(); i++) {
		if (nameTrain == "A") {
			cout << "." << endl;
		} else if (nameTrain == "B") {
			cout << "      ." << endl;
		}
		std::this_thread::sleep_for (std::chrono::seconds(1));
	}
	currentStop++;
	if (nameTrain == "A") {
		cout << line.getStop(currentStop).getNameStop() << endl;
	} else if (nameTrain == "B") {
		cout << "      " << line.getStop(currentStop).getNameStop() << endl;
	}
}

void Train::moveAllLine() {
	if (nameTrain == "A") {
		cout << line.getStop(currentStop).getNameStop() << endl;
	} else if (nameTrain == "B") {
		cout << "      " << line.getStop(currentStop).getNameStop() << endl;
	}
	if (isGo() == true) {
		do {
			move();
		} while (currentStop < line.getNumberStops() - 1);
	}
}
