//============================================================================
// Name        : Classes.cpp
// Author      : josh
// Version     :
// Copyright   : yep
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <sstream>
#include "Cat.h"

using namespace std;

int main() {
	Cat cat;
	cat.jump();
	cat.speak();
	string test = "123";
	int one = 1;

	stringstream ss;
	ss << "one is: ";
	ss <<  one;

	cout<< ss.str()  <<endl;
	return 0;
}
