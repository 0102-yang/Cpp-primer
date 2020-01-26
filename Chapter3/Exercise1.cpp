//Chapter 3 Exercise 1
//Writing time: 2020/1/26

/*
Purpose: Write a program, it allows user to use an integer ot refer his height(in feet),
and transform it into inch and feet. This program uses the underscore character to indicate
the location of the output. Otherwhile, it uses a const symbol constant to express the 
conversion factor.
*/

#include<iostream>
using namespace std;

const int TRANSFORM_FACTOR = 12;

int main()
{
	double temp;
	double feet;
	double inch;

	cout << "Please enter your height(in inch): ____" << endl;
	cin >> temp;
	
	feet = int(temp / TRANSFORM_FACTOR);
	inch = temp - feet * TRANSFORM_FACTOR;
	cout << "Your height is " << feet << " foot(feet) and " << inch << " inch(es)." << endl;

	system("pause");
	return 0;
}