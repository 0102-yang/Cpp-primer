//Exercise 7
//Writing time: 2020/1/25

/*
Purpose: Write a program, it requires user to enter the number of hours and minutes.
In the main() function, it passes two values to a void function, the latter displays
these two values as follows.
//Enter the number of hours: 9
//Enter the number of minutes: 28
//Time: 9:28
*/

#include<iostream>
using namespace std;

void displayTime(int, int);

int main()
{
	int hour = 0;
	int minutes = 0;

	cout << "Enter the number of hours: ";
	cin >> hour;

	cout << "Enter the number of minutes: ";
	cin >> minutes;

	displayTime(hour, minutes);

	system("pause");
	return 0;
}

void displayTime(int hour, int minute)
{
	cout << "Time: " << hour << ":" << minute << endl;
}