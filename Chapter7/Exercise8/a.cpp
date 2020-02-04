/*
 * @Author: Yang 
 * @Date: 2020-02-04 17:08:17 
 * @Last Modified by: Yang
 * @Last Modified time: 2020-02-04 17:21:05
 */
#include <iostream>
using namespace std;

const int SEASON = 4;
const char *Season[4] = {"Spring", "Summer", "Autumn", "Winter"};

void fill(double *);
void show(double *);

int main()
{
    double expenses[SEASON];
    fill(expenses);
    show(expenses);

    system("pause");
    return 0;
}

void fill(double *arr)
{
    for (int i = 0; i < SEASON; i++)
    {
        cout << "Enter " << Season[i] << " expense: ";
        cin >> arr[i];
    }
}

void show(double *arr)
{
    double total = 0.0;
    cout << endl
         << "EXPENSES" << endl;
    for (int i = 0; i < SEASON; i++)
    {
        cout << Season[i] << ": $" << arr[i] << endl;
        total += arr[i];
    }
    cout << "Total Expense: $" << total << endl;
}