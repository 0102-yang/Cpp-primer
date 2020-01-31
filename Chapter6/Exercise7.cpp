#include<iostream>
using namespace std;

int main()
{
	string word;
	cout << "Enter words (q to quit): " << endl;
	cin >> word;
	int vowel = 0;
	int con = 0;
	int other = 0;

	while(word != "q")
	{
		if(isalpha(word[0]))
		{
			switch(word[0])
			{
				case 'a':
				case 'A':
				case 'E':
				case 'e':
				case 'i':
				case 'I':
				case 'O':
				case 'o':
				case 'U':
				case 'u': vowel++; break;
				default: con++;
			}
		}
		else
			other++;
		cin >> word;
	}
	cout << vowel << " words beginning with vowels" << endl;
	cout << con << " words beginning with consonants" << endl;
	cout << other << " others" << endl;

	system("pause");
	return 0;
}