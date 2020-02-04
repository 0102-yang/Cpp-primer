/*
 * @Author: Yang 
 * @Date: 2020-02-04 17:21:30 
 * @Last Modified by: Yang
 * @Last Modified time: 2020-02-04 17:25:34
 */
#include <iostream>
using namespace std;

const int SEASON = 4;
const char *Season[4] = {"Spring", "Summer", "Autumn", "Winter"};

struct Expense
{
    double arr[SEASON];
};

void fill(Expense *);
void show(Expense *);

int main()
{
    Expense ex;
    fill(&ex);
    show(&ex);

    system("pause");
    return 0;
}

void fill(Expense *ptr)
{
    for (int i = 0; i < SEASON; i++)
    {
        cout << "Enter " << Season[i] << " expense: ";
        cin >> ptr->arr[i];
    }
}

void show(Expense *ptr)
{
    double total = 0.0;
    cout << endl
         << "EXPENSES" << endl;
    for (int i = 0; i < SEASON; i++)
    {
        cout << Season[i] << ": $" << ptr->arr[i] << endl;
        total += ptr->arr[i];
    }
    cout << "Total Expense: $" << total << endl;
}