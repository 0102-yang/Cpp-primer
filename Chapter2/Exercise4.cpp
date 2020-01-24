 /*
 Exercise 4
 Purpose: Write a C++ program, it let user enter an age and then shows how 
 many months are included in this age. As shown below:
 //Enter your age: 29
 Writing time: 2020/1/24
 */

#include<iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;
    int month = age * 12;
    cout << "Your age " << age << " includes " << month << " months." << endl;

    system("pause");
    return 0;
}