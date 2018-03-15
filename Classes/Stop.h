/*
 * Stop.h
 *
 *  Created on: 13/03/2018
 *      Author: usuario
 */

#ifndef CLASSES_STOP_H_
#define CLASSES_STOP_H_
#include <iostream>
#include <chrono>
#include <thread>
#include <vector>
#include <typeinfo>
using namespace std;

class Stop {
	string nameStop;
	unsigned int distanceToNext;
public:
	Stop(string nS, unsigned int dTN = 0) : nameStop(nS), distanceToNext(dTN) {}
	const string& getNameStop() const;
	unsigned int getDistanceToNext() const;
	void setDistanceToNext(unsigned int distanceToNext);
	friend ostream& operator<<(ostream &os, const Stop& s) {
		os << s.getNameStop();
		return os;
	}
};

#endif /* CLASSES_STOP_H_ */
