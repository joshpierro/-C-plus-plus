//============================================================================
// Name        : pointers.cpp
// Author      : josh
// Version     :
// Copyright   : yep
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void manipulate(double *value){
	*value = 10.0;
	cout << "value manipulates " << value << endl;
}


int factorial(int value){

	cout << "value manipulates " << value << endl;
}


int main() {
    int nValue = 8;
    nValue = 10;
    int* pnValue = &nValue;
    cout << "pointer address: " << pnValue << endl;
    cout << "int value via pointer " << *pnValue << endl;

    cout << "=============" << pnValue << endl;
    double dValue = 123.4;
    cout << "d value 1: " << dValue << endl;
    manipulate(&dValue);
    cout << "d value 2: " << dValue << endl;

	return 0;
}
