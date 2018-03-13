/*
 * Train.cpp
 *
 *  Created on: 13/03/2018
 *      Author: usuario
 */

#include "Train.h"

bool Train::isGo(){
	if(speed==0)return false;
	return true;
}

void Train::move(){
	for (unsigned int i = 0; i < line.getStop(currentStop).getDistanceToNext(); i++) {
	   std::cout << "Recorridos: " << i+1 << " km." << '\n';
	   std::this_thread::sleep_for (std::chrono::seconds(1));
	}
	currentStop++;
	std::cout << "el tren ha llegado a " << line.getStop(currentStop).getNameStop() << '\n';
}

void Train::setSpeed(float speed) {
	this->speed = speed;
}

void Train::moveAllLine(){
	if(isGo()==true){
		while(currentStop < (line.getNumberStops()-1)){
			move();
		}
	}
}
