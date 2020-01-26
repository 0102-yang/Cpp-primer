//Chapter 3 Exercise 5
//Started time: 2020/1/26
//Finished time: 2020/1/26

/*
Purpose: Write a program, it allows user to enter the drive mileage(kilometer) and the usage 
of gasoline(liter). And then refer the car fuel consumption.
*/

#include<iostream>
using namespace std;

int main()
{
	double fuel;
	double mileage;

	cout << "Please enter the car fuel consumption(liter): ";
	cin >> fuel;
	cout << "Please enter the mileage(km): ";
	cin >> mileage;

	double usage = fuel / mileage * 100;
	cout << "Fuel consumption per 100km is " << usage << "(L)." << endl;


	system("pause");
	return 0;
}