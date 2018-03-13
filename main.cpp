//============================================================================
// Name        : main.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Classes/Train.h"
using namespace std;

int main() {
	Stop stop1("parada1",3);
	Stop stop2("parada2",5);
	Stop stop3("parada3");
	Line line1;
	line1.addStop(stop1);
	line1.addStop(stop2);
	line1.addStop(stop3);
	Train train(line1,1,0);
	std::cout << "El tren esta en " << line1.getStop(train.currentStop).getNameStop() << '\n' ;
	train.moveAllLine();
	//Train train1;
	//train1.speed = 0;
	//train1.line;


}
