//Chapter 4 Exercise 3
//Started time: 2020/1/28
//Finished time: 2020/1/28

/*
3. Write a program, it requires user to enter their first name and then their last name;
And the program use a ',' and a space to put the first name and the last name together. 
It restores and displays the result. Please use char array and the function of 
headfile cstring. Here's what happens when the program runs:
//Enter your first name: Flip
//Enter your last name: Fleming
//Here's the information in a single string: Fleming, Flip
*/

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char firstName[20];
	char lastName[40];

	cout << "Enter your first name: ";
	cin.getline(firstName, 20);
	cout << "Enter your last name: ";
	cin.getline(lastName, 20);

	strncat(lastName, ", ", 3);
	strncat(lastName, firstName, 20);

	cout << "Here's the information in a single string: " << lastName;

	system("pause");
	return 0;
}