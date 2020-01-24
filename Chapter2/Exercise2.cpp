/*
Exercise 2
Purpose: Write a C++ program. It request user to enter a distance in 'long'
and transform its unit into 'ma'.
Time: 2020/1/24
*/

#include<iostream>
using namespace std;

int main()
{
	int unit;
	cout << "Please enter a distance in 'long': ";
	cin >> unit;
	int ma = 220 * unit;
	cout << "The 'ma' is: " << ma << endl;

	system("pause");
	return 0;
}