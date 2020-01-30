#include<iostream>
using namespace std;

const string Month[12] = { "January", "Febuary", "Match", "April", "May", "June", "July", 
"August", "September", "October", "November", "December" };
const string Year[3] = { "first year", "second year", "third year" };

int main()
{
	int book[3][12];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 12; j++) {
			cout << "Please enter the books sales of " << Month[j] << " of the "
				<<Year[i]<<": ";
			cin >> book[i][j];
		}
	}

	int totalSum = 0;
	for (int sum = 0, i = 0; i < 3; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			sum += book[i][j];
		}
		totalSum += sum;
		cout << "The sales of the " << Year[i] << " is " << sum << endl;
	}

	cout << "The total sales of these three years are: " << totalSum << endl;

	system("pause");
	return 0;
}