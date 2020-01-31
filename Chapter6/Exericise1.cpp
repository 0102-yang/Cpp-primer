#include<iostream>
#include<cctype>
using namespace std;

int main()
{
	char ch;

	while((ch = cin.get()) != '@')
	{
		if(isdigit(ch))
			continue;
		else if(islower(ch))
			cout << char(toupper(ch));
		else if(isupper(ch))
			cout << char(tolower(ch));
	}
	cout << endl;

	system("pause");
	return 0;
}