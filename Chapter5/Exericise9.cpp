#include<iostream>
using namespace std;

int main()
{
	string word;
	int number = 0;
	
	cout << "Enter words(to stop, type the word done): " << endl;
	while(word != "done")
	{
		int i = 0;
		cin >> word;
		number++;
	}

	cout << "You entered a total of " << --number << " words." << endl;

	system("pause");
	return 0;
}