//============================================================================
// Name        : PassByRefVal.cpp
// Version     :
// Copyright   : Your copyright notice
// Description : Contrast past by reference and pass by value in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void value(int num1){
	num1+=5;
}

void reference (int& num1){
	num1+=5;
}


int main() {
	int num1 =5;
	value(num1);
	cout << num1 <<endl;
	reference(num1);
	cout << num1 <<endl;
	return 0;
}
