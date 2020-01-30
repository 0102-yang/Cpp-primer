#include<iostream>
using namespace std;

int main()
{
	double sum = 0;
	double number;

	cout << "Please enter number: ";
	cin >> number;
	while (number != 0)
	{
		sum += number;
		cout << "So far the result is " << sum << endl;
		cout << "Please enter number: ";
		cin >> number;
	}
	cout << "Done!" << endl;

	system("pause");
	return 0;
}