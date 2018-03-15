/*
 * Semaphore.h
 *
 *  Created on: 15/03/2018
 *      Author: usuario
 */

#ifndef CLASSES_SEMAPHORE_H_
#define CLASSES_SEMAPHORE_H_
#include <mutex>
#include <condition_variable>
using namespace std;

class Semaphore {
	mutex mu;
	condition_variable condition;
	unsigned int count;
public:
	Semaphore() : count(0) {}
	void notify();
	void wait();
};

#endif /* CLASSES_SEMAPHORE_H_ */
