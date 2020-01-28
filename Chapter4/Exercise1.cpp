//Chapter 4 Exercise 1
//Started time: 2020/1/28
//Finished time: 2020/1/28

/*
1. Write a program and display the information as the following requests.
//What is your first name? Betty Sue
//What is your last name? Yewe
//What letter grade do you deserve? B
//Name: Yewe, Betty Sue
//Grade: C
//Age: 22
*/

#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main()
{
	string firstName;
	string lastName;
	char grade;
	int age;

	cout << "What is your first name? ";
	getline(cin, firstName);
	cout << "What is your last name? ";
	getline(cin, lastName);
	cout << "What letter grade do you deserve? ";
	(cin >> grade).get();
	cout << "What is your age? ";
	cin >> age;

	lastName += ", ";
	lastName += firstName;

	cout << "Name: " << lastName << endl;
	cout << "Grade: " << (char)(grade + 1) << endl;
	cout << "Age: " << age << endl;

	system("pause");
	return 0;
}