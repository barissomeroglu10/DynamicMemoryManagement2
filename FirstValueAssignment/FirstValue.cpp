/*
This code does total from 1 to entered number by user.
Purpose of the code is learn first value assigment for dynamic memory management.

Developer = Barış Someroğlu
Date = 18.06.2024 - 03:30 pm
*/

#include <iostream>

using namespace std;

// Function prototype 
int Total(int*);

int main()
{
	int Number;

	cout << "Please Enter a Number: ";
	cin >> Number;

	// First value assigment
	int* FirstValue = new int(Number);

	cout << "\nFirst Value (Entered Number) at " << FirstValue << " Memory Address = " << *FirstValue << endl;

	// Call function
	cout << "\nTotal = " << Total(FirstValue) << endl;

	return 0;
}

// Function definition
int Total(int* EnteredNumber)
{
	int TotalOfNumber = 0;

	for (int i = 1; i <= *EnteredNumber; i++)
	{
		TotalOfNumber += i;
	}

	return TotalOfNumber;
}
