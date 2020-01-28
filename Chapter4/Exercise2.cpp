//Chapter 4 Exercise 2
//Started time: 2020/1/28
//Finished time: 2020/1/28

/*
2. Modify the program list 4.4, use C++ string class instead of char array.
*/

#include<iostream>
#include<string>
using namespace std;

int main()
{
	string name;
	string dessert;

	cout << "Enter your name: " << endl;
	getline(cin, name);
	cout << "Enter your favorite dessert: " << endl;
	getline(cin, dessert);
	
	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << endl;

	system("pause");
	return 0;
}