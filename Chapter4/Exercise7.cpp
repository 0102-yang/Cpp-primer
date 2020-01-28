//Chapter 4 Exercise 7
//Started time: 2020/1/28
//Finished time: 2020/1/28

/*
7. William Wingate is working for pizza survice. For every pizza, he need record the 
information as following: 
% The name of pizza company, it is consist of many world
% The diameter of pizza
% The weight of pizza
Please design a structure that can store these information, and write a program to use this
structure variable. The program requires user to enter the above information. Please enter
cin(or its method)and cout.
*/

#include<iostream>
#include<string>
using namespace std; 

struct Pizza
{
	string m_companyName;
	double m_diameter;
	double m_weight;
};

int main()
{
	Pizza p;
	
	cout << "Enter the company name of Pizza: ";
	getline(cin, p.m_companyName);
	cout << "Enter the diameter of Pizza: ";
	cin >> p.m_diameter;
	cout << "Enter the weight of Pizza: ";
	cin >> p.m_weight;

	cout << "Name: " << p.m_companyName << endl
		<< "Diameter: " << p.m_diameter << endl
		<< "Weight: " << p.m_weight << endl;

	system("pause");
	return 0;
}