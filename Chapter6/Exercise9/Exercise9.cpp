#include<iostream>
#include<fstream>
#include<string>
using namespace std;

struct Don
{
	string m_name;
	int m_donation;
};

int main()
{
	int number;
	ifstream file;
	file.open("Text.txt");

	if(!file.is_open())
	{
		cout << "Can not open this file." << endl;
		system("pause");
		exit(EXIT_FAILURE);
	}

	file >> number;
	file.get();
	Don *don = new Don[number];

	for(int i = 0; i < number; i++) 
	{			
		getline(file, (don + i)->m_name); 
		(file >> (don + i)->m_donation).get();
	}
	
	bool none = true;
	cout << "Grand Patrons:" << endl;
	for(int i = 0; i < number; i++)
	{
		if((don + i)->m_donation > 10000)
		{
			cout << "Name: " << (don + i)->m_name << "    "
				<< "Donations: " << (don + i)->m_donation << endl;
			none = false;
		}
	}
	if(none)
		cout << "None" << endl;

	none = true;
	cout << "Patrons:" << endl;
	for(int i = 0; i < number; i++)
	{
		if((don + i)->m_donation <= 10000)
		{
			cout << "Name: " << (don + i)->m_name << "    "
				<< "Donations: " << (don + i)->m_donation << endl;
			none = false;
		}
	}
	if(none)
		cout << "None" << endl;

	delete[] don;

	system("pause");
	return 0;
}