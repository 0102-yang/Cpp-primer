//Chapter 3 Exercise 7
//Started time: 2020/1/26
//Finished time: 2020/1/26

/*
Purpose: Write a program, it allows user to enter the car fuel consumption(car fuel 
consumption per 100km(L))in Europe style. And then transform it into American style--
how many miles per gallon. Attention, the American method(distance/fuel) is opposite
of Europe method(fuel/distance)except using different units. 100 km = 62.14 miles, 
1 gallon = 3.875 L. Because of this, 19mpg is about 12.41/100km, 127mpg is about 
8.71/100km.
*/

#include<iostream>
using namespace std;

const double HundredKm_to_mile = 62.14;
const double Gallon_to_liter = 3.875;

int main()
{
	double con;
	cout << "Please enter the car fuel consumption(L/100km): ";
	cin >> con;
	
	double mpg = HundredKm_to_mile / (con / Gallon_to_liter);

	cout << "The car fuel consumption is " << mpg << "(mpg)" << endl;

	system("pause");
	return 0;
}