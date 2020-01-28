//Chapter 4 Exercise 8
//Started time: 2020/1/28
//Finished time: 2020/1/28

/*
8. Finish program exercise 7, but use new to distribute the memory instead of declare a 
structure variable. Otherwise, let program enter the diameter in front of entering name.
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
	Pizza* p = new Pizza;

	cout << "Enter the diameter of pizza: ";
	(cin >> p->m_diameter).get();
	cout << "Enter the name of company: ";
	getline(cin, p->m_companyName);
	cout << "Enter the weight of pizza: ";
	cin >> p->m_weight;

	cout << "Name: " << p->m_companyName << endl
		<< "Diameter: " << p->m_diameter << endl
		<< "Weight: " << p->m_weight << endl;

	system("pause");
	return 0;
}