//Chapter 4 Exercise 9
//Started time: 2020/1/28
//Finished time: 2020/1/28

/*
9. Finish program exercise 6 but use new to allocate array dynamically instead of declare
a CandyBar array that includes three elements.
*/

#include<iostream>
#include<string>
using namespace std;

struct CandyBar
{
	string m_brand;
	double m_weight;
	double m_calories;
};

int main()
{
	CandyBar* snack = new CandyBar[3];

	snack[0] = { "A", 3.2, 123 };
	snack[1] = { "asdf", 2.3, 44 };
	snack[2] = { "wert", 1.1, 1234 };

	cout << "The brand of candy is " << snack[0].m_brand << endl;
	cout << "The weight of candy is " << snack[0].m_weight << endl;
	cout << "The calories of candy is " << snack[0].m_calories << endl;

	cout << "The brand of candy is " << snack[1].m_brand << endl;
	cout << "The weight of candy is " << snack[1].m_weight << endl;
	cout << "The calories of candy is " << snack[1].m_calories << endl;

	cout << "The brand of candy is " << snack[2].m_brand << endl;
	cout << "The weight of candy is " << snack[2].m_weight << endl;
	cout << "The calories of candy is " << snack[2].m_calories << endl;

	system("pause");
	return 0;
}