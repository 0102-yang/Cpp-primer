#include<iostream>
using namespace std;

int main()
{
	double income;

	cout << "Please enter your income: ";
	while((cin >> income) && income >= 0)
	{
		double tax = 0;
		if(income > 5000 && income < 15001)
			tax = (income - 5000) * 0.1;
		else if(income > 10000 && income < 35001)
			tax = 10000 * 0.1 + (income - 15000) * 0.15;
		else if(income > 35000)
			tax = 10000 * 0.1 + 20000 * 0.15 + (income - 35000) * 0.2;
	
		cout << "Your tax is " << tax << " tvarps." << endl;
		cout << "Please enter your income: ";
	}

	system("pause");
	return 0;
}