#include <iostream>
using namespace std;

struct debts
{
    char name[50];
    double amount;
};

template <typename T>
T sumArray(T arr[], int n);

template <typename T>
T sumArray(T *arr[], int n);

int main()
{
    int things[6]{13, 31, 103, 301, 310, 130};
    debts mr_E[3]{{"Ima Wolfe", 200.0}, {"Ura Foxe", 1300.0}, {"Iby Stout", 1800.0}};

    double *pd[3];
    for (int i = 0; i < 3; i++)
    {
        pd[i] = &mr_E[i].amount;
    }
    int sum1 = sumArray(things, 6);
    cout << "Listing Mr.E's counts of things: " << endl;
    cout << sum1 << endl;
    double sum2 = sumArray(pd, 3);
    cout << "Listing Mr.E's debts: \n";
    cout << sum2 << endl;

    system("pause");
    return 0;
}

template <typename T>
T sumArray(T arr[], int n)
{
    T sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

template <typename T>
T sumArray(T *arr[], int n)
{
    T sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += *arr[i];
    }
    return sum;
}