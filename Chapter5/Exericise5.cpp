#include<iostream>
using namespace std;

const string Month[12] = { "January", "Febuary", "Match", "April", "May", "June", "July", 
"August", "September", "October", "November", "December" };

int main()
{
	int book[12];
	for (int i = 0; i < 12; i++)
	{
		cout << "Please enter the books sales of " << Month[i] << ": ";
		cin >> book[i];
	}

	int sum = 0;
	for (int i = 0; i < 12; i++)
		sum += book[i];

	cout << "The total sales are: " << sum << endl;

	system("pause");
	return 0;
}