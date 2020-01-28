//Chapter 4 Exercise 4
//Started time: 2020/1/28
//Finished time: 2020/1/28

/*
4. Write a program, it requires user to enter their first name and then their last name;
And the program use a ',' and a space to put the first name and the last name together. 
It restores and displays the result. Please use string object and the functions of the
string headfile. Here's what happens when the program runs:
//Enter your first name: Flip
//Enter your last name: Fleming
//Here's the information in a single string: Fleming, Flip
*/

#include<iostream>
#include<string>
using namespace std;

int main()
{
	string firstName;
	string lastName;

	cout << "Enter your first name: ";
	getline(cin, firstName);
	cout << "Enter your last name: ";
	getline(cin, lastName);

	lastName += ", ";
	lastName += firstName;

	cout << "Here's the information in a single string: " << lastName << endl;

	system("pause");
	return 0;
}