//============================================================================
// Name        : Input.cpp
// Author      : josh
// Version     :
// Copyright   : yep
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	string input;
	int numberInput;

	cout << "enter your name: " << flush;
	cin >> input;
	cout << "You entered: " << input <<endl;

	cout << "enter a number: " << flush;
	cin >> numberInput;
	cout << "You entered: " << numberInput <<endl;
	return 0;
}
