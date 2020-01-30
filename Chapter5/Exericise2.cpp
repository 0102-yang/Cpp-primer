#include<iostream>
#include<array>
using namespace std;

int main()
{
	array<long double, 101>arrays;

	arrays[0] = arrays[1] = 1;
	for (int i = 2; i < 101; i++)
	{
		arrays[i] = i * arrays[i - 1];
	}

	cout << arrays[100] << endl;

	system("pause");
	return 0;
}