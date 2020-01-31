#include<iostream>
#include<array>
using namespace std;

int main()
{
	array<double, 10>don;

	double sum = 0;
	for(int i = 0; i < 10; i++)
	{
		if(!(cin >> don[i]))
		{
			double ave = sum / i;
			int count = 0;
			cout << "The average is " << ave << endl;
			for(int j = 0; j < i; j++)
			{
				if(don[j] > ave)
					count++;
			}
			cout << "There are " << count << " numbers above average." << endl;
			break;
		}
		sum += don[i];
	}

	system("pause");
	return 0;
}