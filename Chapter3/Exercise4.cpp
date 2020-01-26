//Chapter 3 Exercise 4
//Finished time: 2020/1/26

/*
Purpose: Write a program, it allows user to enter the number of seconds in integer(use long
type or long long type variable to restore it), and displays this time in hours, minutes and
seconds. Please use symbol constant to express how many hours, minutes and seconds in a day.
The input of this program should be similar to it as follows.
//Enter the number of seconds: 31600000
//31600000 seconds = 365 days, 17 hours, 46 minutes, 40 seconds
*/

#include<iostream>
using namespace std;

const int Day_to_hour = 24;
const int Hour_to_minute = 60;
const int Minute_to_second = 60;

int main()
{
	long second;
	
	cout << "Enter the number of seconds: ";
	cin >> second;
	long temp = second;

	int minute = second / Minute_to_second;
	int hour = minute / Hour_to_minute;
	int day = hour / Day_to_hour;
	second %= Minute_to_second; 
	minute %= Hour_to_minute;
	hour %= Day_to_hour;

	cout << temp << " seconds = " << day << " days, " << hour << " hours, "
		<< minute << " minutes, " << second << " seconds" << endl;
					
	system("pause");												 
	return 0;
}