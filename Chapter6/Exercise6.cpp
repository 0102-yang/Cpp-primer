#include<iostream>
#include<cstdbool>
using namespace std;

struct Donor
{
	string m_name;
	double m_donation = 0;
};

int main()
{
	int number;
	cout << "Enter the number of donors: ";
	cin >> number;

	Donor *Don = new Donor[number];

	string name;
	for(int i = 0; i < number; i++)
	{
		cout << "Please enter the name of the donor(over to quit): " ;
		cin >> (Don + i)->m_name;
		cout << "Please enter the donation: ";
		cin >> (Don + i)->m_donation;
	}

	bool none = true;
	cout << "Grand Patrons:" << endl;
	for(int j = 0; j < number; j++)
	{
		if((Don + j)->m_donation > 10000)
		{
			cout << "Name: " << (Don + j)->m_name << endl
				<< "Donations: " << (Don + j)->m_donation << endl;
			none = false;
		}
	}
	if(none)
		cout << "None" << endl;
	
	none = true;
	cout << "Patrons:" << endl;
	for(int k = 0; k < number; k++)
	{
		if((Don + k)->m_donation <= 10000)
		{
			cout << "Name: " << (Don + k)->m_name << endl
				<< "Donations: " << (Don + k)->m_donation << endl;
			none = false;
		}
	}
	if(none)
		cout << "None" << endl;

	delete[] Don;

	system("pause");
	return 0;
}