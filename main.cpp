//============================================================================
// Name        : Ejercicio2Trenes.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <thread>
#include "Classes/Train.h"

void start(Train t) {
	t.moveAllLine(t);
}

Line createLineA() {
	Line line;
	Stop stop1("A1",3);
	Stop stop2("A2",5);
	Stop stop3("A3");
	line.addStop(stop1);
	line.addStop(stop2);
	line.addStop(stop3);
	return line;
}

Line createLineB() {
	Line line;
	Stop stop1("B1",3);
	Stop stop2("B2",5);
	Stop stop3("B3");
	line.addStop(stop1);
	line.addStop(stop2);
	line.addStop(stop3);
	return line;
}

int main() {
	Line lineA = createLineA();
	Line lineB = createLineB();
	Train trainA(lineA, "A", 1, 0);
	Train trainB(lineB, "B", 1, 0);

	vector<thread>threads;
	threads.push_back(std::thread(start, trainA));
	threads.push_back(std::thread(start, trainB));

	for (auto& s : threads) {
		s.join();
	}
}
