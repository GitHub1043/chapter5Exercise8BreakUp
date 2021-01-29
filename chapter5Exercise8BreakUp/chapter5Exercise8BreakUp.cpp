// This program takes an integer between 0 and 999 and breaks up its digits
// Written by: Ayden Holgate
// Date: Jan. 21, 2021

// chapter5Exercise8BreakUp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void BreakUp(int number){
	cout << number << endl;
}


int _tmain(int argc, _TCHAR* argv[])
{// Start of program
	int number;

	cout << "Enter number between 0 and 999: ";
	cin >> number;

	BreakUp(number/100);
	BreakUp(number/10%10);
	BreakUp (number%10);

	return 0;
}// End of program

