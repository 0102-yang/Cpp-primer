//Chapter 4 Exercise 10
//Started time: 2020/1/28
//Finished time: 2020/1/28

/*
10. Write a program, it requires user to enter the grade of 40 yards race three times(If you
like, it could require user to enter the grade of 40 meters race). And it then displays the
time and average grade. Please use a array object to store datas.
*/

#include<iostream>
#include<array>
using namespace std;

int main()
{
	array<double, 3>grade;

	cout << "Please enter the first grade: ";
	cin >> grade[0];
	cout << "Please enter the second grade: ";
	cin >> grade[1];
	cout << "Please enter the third grade: ";
	cin >> grade[2];

	cout << "You had run " << grade.size() << " times." << endl;
	cout << "Your average grade is " << (grade[0] + grade[1] + grade[2]) / 3 << endl;

	system("pause");
	return 0;
}