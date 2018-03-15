/*
 * Semaphore.cpp
 *
 *  Created on: 15/03/2018
 *      Author: usuario
 */

#include "Semaphore.h"

void Semaphore::notify() {
	unique_lock<mutex> lock(mu);
	count++;
	condition.notify_one();
}

void Semaphore::wait() {
	unique_lock<mutex> lock(mu);
	while(count == 0) {
		condition.wait(lock);
	}
	count--;
}
