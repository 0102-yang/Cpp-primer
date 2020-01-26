//Chapter 3 Exercise 2
//Finished time: 2020/1/26

/*
Purpose: Write a program, it allows user to enter own height in feet and inch, and enter own
weight in pound. (Use three variable to restore these information.)The program report the 
user's BMI(Body Mass Index, the index of weight). To calculate the BMI, this program indicate
the user's height in inch(1 foot is 12 inch), and transforms the height in inch to the height
in meter(1 inch = 0.0254 meter). What's more, it transforms the weight in pound to the weight
in kilogram(1 kilogram = 2.2 pound). Finally, it caculates the corresponding BMI----weight
(kilogram)divided by height(meter) squared. Please use symbol constant to express a variety of
transform factors.
*/

#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

const double Inch_to_meter = 0.0254;
const double Kilo_to_pound = 2.2;
const int Feet_to_inch = 12;

int main()
{
	double height_in_inch;
	double height_in_feet;
	double weight_in_pound;

	cout << "Please enter your height in feet and inch, and then enter your weight in pound: ";
	cin >> height_in_feet >> height_in_inch >> weight_in_pound;

	double height = (height_in_feet * Feet_to_inch + height_in_inch) * Inch_to_meter;
	double weight = weight_in_pound / Kilo_to_pound;
	double bmi = weight / (pow(height, 2));

	cout << fixed << setprecision(2) << "Your BMI is " << bmi << endl;

	system("pause");
	return 0;
}