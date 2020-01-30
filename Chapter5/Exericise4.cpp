#include<iostream>
using namespace std;

int main()
{
	double D_dep = 100;
	double C_dep = 100;
	int count = 0;

	do {
		D_dep += 100 * 0.1;
		C_dep *= 1.05;
		count++;
	} while (D_dep >= C_dep);

	cout << "Cleo need " << count << " years to exceed Dephne." << endl;
	cout << "Now Cleo's deposit is $" << C_dep << endl;
	cout << "Now Dephne's deposit is $" << D_dep << endl;

	system("pause");
	return 0;
}