#include<iostream>
using namespace std;

int main()
{
	char word[40];
	int number = 0;

	cout << "Enter words(to stop, type the word done): " << endl;
	do{
		cin >> word;
		size_t len = strlen(word);
		word[len] = '\0';
		number++;
	} while(strcmp(word, "done"));

	cout << "You entered a total of " << --number << " words." << endl;

	system("pause");
	return 0;
}