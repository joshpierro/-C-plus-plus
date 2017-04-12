//============================================================================
// Name        : Hello.cpp
// Author      : josh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int Factorial(int value){

	int factorial = value;
	while(value>1){
		value = value-1;
		factorial = factorial*value;
		//cout << "value:"<< factorial << endl;
	}
	return factorial;
	};

int main() {
	Factorial(4);
	return 0;
}
