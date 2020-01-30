#include<iostream>
using namespace std;

int main()
{
	int min;
	int max;

	cout << "Please enter two integers(min, max): ";
	cin >> min >> max;

	int sum = 0;
	for (int i = min; i < max + 1; i++)
		sum += i;

	cout << "The result is " << sum << endl;
	

	system("pause");
	return 0;
}