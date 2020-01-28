//Chapter 4 Exercise 6
//Started time: 2020/1/28
//Finished time: 2020/1/28

/*
6. Structure CandyBar includes 3 members as the ptogram exercise 5 displays. Write a program,
create a CandyBar array which includes 3 elements and then initialize them with appropriate
values. And display information of every structure.
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
	CandyBar snack[3];

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