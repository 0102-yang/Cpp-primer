//Chapter 3 Exercise 5
//Started time: 2020/1/26
//Finished time: 2020/1/26

/*
Purpose: Write a program, it allows user to enter the current world's population and the 
current Chinese population. Restore these information in a long long type variable, and 
displays the percentage of the Chinese and the global. The output of this program should 
be similar to the following.
//Enter the world's population: 6898758899
//Enter the population of the Republic of China: 1400000000
//The population of the Republic of China is (percentage) of the world population.
*/

#include<iostream>
using namespace std;

int main()
{
	long double chinaPop;
	long double worldPop;

	cout << "Enter the world's population: ";
	cin >> worldPop;
	cout << "Enter the population of the Republic of China: ";
	cin >> chinaPop;
	cout << "The population of the Republic of China is " << chinaPop / worldPop * 100
		<< " % of the world population." << endl;

	system("pause");
	return 0;
}