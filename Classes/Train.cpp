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
	for (unsigned int i = 0; i < line->getStop(currentStop)->getDistanceToNext(); i++) {
		if (nameTrain == "AVE") {
			cout << "." << endl;
		} else if (nameTrain == "TALGO") {
			cout << "                                   ." << endl;
		}
		std::this_thread::sleep_for (std::chrono::seconds(1));
	}
	currentStop++;
	if (nameTrain == "AVE") {
		cout << line->getStop(currentStop)->getNameStop() << endl;
	} else if (nameTrain == "TALGO") {
		cout << "                                   " << line->getStop(currentStop)->getNameStop() << endl;
	}
}

void Train::stop() {
	if (nameTrain == "AVE") {
		cout << nameTrain + " esperando en " + line->getStop(currentStop)->getNameStop() + '\n';
		lock_guard<mutex> guard(line->getStop(currentStop)->mStop);
		cout << nameTrain + " parado en " + line->getStop(currentStop)->getNameStop() + '\n';
		move();
		std::this_thread::sleep_for (std::chrono::seconds(2));
	} else if (nameTrain == "TALGO") {
		cout << "                                   " + nameTrain + " esperando en " + line->getStop(currentStop)->getNameStop() + '\n';
		lock_guard<mutex> guard(line->getStop(currentStop)->mStop);
		cout << "                                   " + nameTrain + " parado en " + line->getStop(currentStop)->getNameStop() + '\n';
		move();
		std::this_thread::sleep_for (std::chrono::seconds(2));
	}
}

void Train::moveAllLine() {
	if (nameTrain == "AVE") {
		cout << line->getStop(currentStop)->getNameStop() << endl;
	} else if (nameTrain == "TALGO") {
		cout << "                                   " << line->getStop(currentStop)->getNameStop() << endl;
	}
	if (isGo() == true) {
		do {
			stop();
			move();
		} while (currentStop < line->getNumberStops() - 1);
	}
}
