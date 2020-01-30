#include<iostream>
using namespace std;

int main()
{
	int number;
	cout << "Enter number of rows: ";
	cin >> number;

	for(int i = 0; i < number; i++)
	{
		for(int j = 0; j < number - 1 - i; j++)
		{
			cout << '.';
		}
		for(int k = 0; k < i+1; k++)
		{
			cout << '*';
		}
		cout << endl;
	}

	system("pause");
	return 0;
}