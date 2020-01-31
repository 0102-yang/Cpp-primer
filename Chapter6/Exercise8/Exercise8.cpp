#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	char ch;
	ifstream file;

	file.open("text.txt");
	if(!file.is_open())
	{
		cout << "Can not open this file." << endl;
		system("pause");
		exit(EXIT_FAILURE);
	}

	file >> ch;
	int count = 0;
	while(!file.eof())
	{
		count++;
		file >> ch;
	}

	cout << "This file has " << count << " chars." << endl;

	system("pause");
	return 0;
}