//Chapter 3 Exercise 3
//Finished time: 2020/1/26

/*
Purpose: Write a program, it allows user to enter a latitude in degrees, minutes, and 
seconds, and then displays this latitude in degrees. 1 degree is 60 minutes, 1 minute is
60 seconds. Please enter these values in symbol constant. For every input values, it should
use a independent variable to restore it. Here's what happens when the program runs.
//Enter a latitude in degrees, minutes, and seconds:
//First, enter the degrees: 37
//Next,enter the minutes of arc: 51
//Finally, enter the seconds of arc: 19
//37 degrees, 51 minutes, 19 seconds = 37.8553 degrees
*/

#include<iostream>
using namespace std;

const double Degree_to_minute = 60.0;
const double Minute_to_second = 60.0;

int main()
{
	int degree;
	int minute;
	int second;
	
	cout << "Enter a latitude in degrees, minutes, and seconds:" << endl;
	cout << "First, enter the degrees: ";
	cin >> degree;
	cout << "Next, enter the minutes of arc: ";
	cin >> minute;
	cout << "Finally, enter the seconds of arc: ";
	cin >> second;

	double degrees = double(((minute + second / Minute_to_second) / Degree_to_minute)) + degree;

	cout << degree << " degrees, " << minute << " minutes, " << second << " seconds = "
		<< degrees << " degrees" << endl;
					
	system("pause");												 
	return 0;
}