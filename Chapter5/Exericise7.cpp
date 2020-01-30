#include<iostream>
#include<string>
using namespace std;

struct Car
{
	string m_make;
	int m_year = 0;
};

int main()
{
	int number;
	cout << "How many car do you wish to catalog? ";
	(cin >> number).get();

	Car *car = new Car[number];
	for(int i = 0; i < number; i++)
	{
		cout << "Car #" << i + 1 << ':' << endl;
		cout << "Please enter the make: ";
		getline(cin, car[i].m_make);
		cout << "Please enter the year made: ";
		(cin >> car[i].m_year).get();
	}

	cout << "Here is your collection: " << endl;
	for(int i = 0; i < number; i++)
	{
		cout << car[i].m_year << " " << car[i].m_make << endl;
	}

	delete[] car;

	system("pause");
	return 0;
}