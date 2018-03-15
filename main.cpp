//============================================================================
// Name        : Ejercicio2Trenes.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <thread>
#include <mutex>
#include "Classes/Train.h"


void start(Train t) {
	t.moveAllLine();
}

Line* createLineA() {
	Line* line = new Line();
	Stop* stop1 = new Stop("A1",3);
	Stop* stop2 = new Stop("A2",5);
	Stop* stop3 = new Stop("A3");
	line->addStop(stop1);
	line->addStop(stop2);
	line->addStop(stop3);
	return line;
}

Line* createLineB() {
	Line* line = new Line();
	Stop* stop1 = new Stop("B1",3);
	Stop* stop2 = new Stop("B2",5);
	Stop* stop3 = new Stop("B3");
	line->addStop(stop1);
	line->addStop(stop2);
	line->addStop(stop3);
	return line;
}

int main() {
	Line* lineA = createLineA();
	//Line* lineB = createLineB();
	//Train* trainA = new Train(lineA, "A", 1, 0);
	//Train* trainB = new Train(lineA, "B", 1, 0);

	Train trainA(lineA, "AVE", 1, 0);
	Train trainB(lineA, "TALGO", 1, 0);

	vector<thread>threads;
	threads.push_back(std::thread(start, trainA));
	threads.push_back(std::thread(start, trainB));

	for (auto& s : threads) {
		s.join();
	}
}
