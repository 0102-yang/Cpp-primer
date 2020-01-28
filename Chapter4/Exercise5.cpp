//Chapter 4 Exercise 5
//Started time: 2020/1/28
//Finished time: 2020/1/28

/*
5. Structure CandyBar includes 3 members. The first member stores the brand of candy; The 
second member stores the weight of candy(can have decimals); The third member stores the 
calories of candy(integer). Please enter a program, declare	this structure, create a 
CandyBar variable called snack and then initialize the members to "Mocha Munch", 2.3 and
350. You should initialize while declare. Finally, the program displays the information 
of snack variable.
*/

#include<iostream>
using namespace std;

struct CandyBar
{
	string m_brand;
	double m_weight;
	int m_calories;
};

int main()
{
	CandyBar snack = { "Mocha Munch", 2.3, 350 };

	cout << "The brand of candy is " << snack.m_brand << endl;
	cout << "The weight of candy is " << snack.m_weight << endl;
	cout << "The calories of candy is " << snack.m_calories << endl;

	system("pause");
	return 0;
}