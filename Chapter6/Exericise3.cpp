#include<iostream>
using namespace std;

void mySwitch();
void myShow();

int main()
{

	mySwitch();

	system("pause");
	return 0;
}

void myShow()
{
	cout << "Please enter one of the following choices: " << endl;
	cout << "c) carnivore          p) pianist" << endl;
	cout << "t) tree               g) game" << endl;
}

void mySwitch()
{
	cout << "Please enter a c, p, t, or g: ";
	char ch = cin.get();
	cin.get();

	switch(ch)
	{
		case 'c':
			cout << "A maple is a carnivore." << endl;
			break;
		case 'p':
			cout << "A maple is a pianist." << endl;
			break;
		case 't':
			cout << "A maple is a tree." << endl;
			break;
		case 'g':
			cout << "A maple is a game." << endl;
			break;
		default:
			mySwitch();
	}
}