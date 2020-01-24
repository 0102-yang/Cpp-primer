/*
Exercise 3
Purpose: Write a C++ program and use three functions defined by user(including main()),
and then generate the following output:
//Three blind mice
//Three blind mice
//See-how they run
//See-how they run
One of the functions is called twice, it generates the first two lines.
Another of the functions is called twice as well, it generates other lines.
*/

#include<iostream>
using namespace std;

void printMice();
void printOther();

int main()
{
	printMice();
	printMice();
	printOther();
	printOther();

	system("pause");
	return 0;
}

void printMice()
{
	cout << "Three blind mice" << endl;
}

void printOther()
{
	cout << "See-how they run" << endl;
}