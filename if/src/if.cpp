//============================================================================
// Name        : if.cpp
// Author      : josh
// Version     :
// Copyright   : yep
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	string password = "hello";
	cout << "enter your password" << flush;

	string input;

	cin >> input;

	if (input==password) {
		cout << "yep" << endl;
	}

	if (input!=password) {
			cout << "nope" << endl;
		}

	return 0;
}
