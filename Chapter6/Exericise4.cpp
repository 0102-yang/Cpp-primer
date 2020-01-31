#include<iostream>
using namespace std;

const int strsize = 20;
const int numberOfPeople = 3;

struct bop
{
	char fullname[strsize];
	char title[strsize];
	char bopname[strsize];
	int preference;
};

int main()
{
	bop *man = new bop[numberOfPeople];

	man[0] = {"Yang", "A", "programmer", 0};
	man[1] = {"Chen", "B", "student", 1};
	man[2] = {"Lei", "Cs", "chairman", 2};
	
	cout << "Benevolent Order of Pregrammers Report" << endl;
	cout << "a. display by name        b. display by title" << endl;
	cout << "c. display by bopname     d. display by preference" << endl;
	cout << "q. quit" << endl;
	
	cout << "Enter your choice: ";
	char ch;
	cin >> ch;
	while(true)
	{
		switch(ch)
		{
			case 'a':
				for(int i = 0; i < numberOfPeople; i++)
					cout << man[i].fullname << endl;
				break;
			case 'b':
				for(int i = 0; i < numberOfPeople; i++)
					cout << man[i].title << endl;
				break;
			case 'c':
				for(int i = 0; i < numberOfPeople; i++)
					cout << man[i].bopname << endl;
				break;
			case 'd':
				for(int i = 0; i < numberOfPeople; i++)
				{
					switch(man[i].preference)
					{
						case 0:
							cout << man[i].fullname << endl;
							break;
						case 1:
							cout << man[i].title << endl;
							break;
						case 2:
							cout << man[i].bopname << endl;
					}
				}
				break;
			case 'q':
				cout << "Bye!" << endl;
				system("pause");
				return 0;
			default:;
		}
		cout << "Next choice: ";
		cin >> ch;
	}
}

void showMenu()
{
	
}