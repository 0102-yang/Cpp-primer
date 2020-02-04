/*
 * @Author: Yang 
 * @Date: 2020-02-04 16:40:27 
 * @Last Modified by: Yang
 * @Last Modified time: 2020-02-04 17:04:20
 */
#include <iostream>
using namespace std;

const int limit = 20;

double *fillArray(double *arr, int limit);
void showArray(double *start, double *end);
void revalue(double r, double *start, double *end);

int main()
{
    double arr[limit];
    double *endptr = fillArray(arr, limit);
    showArray(arr, endptr);
    revalue(3, arr, endptr);
    showArray(arr, endptr);

    system("pause");
    return 0;
}

double *fillArray(double *arr, int limit)
{
    double *ptr = arr;
    cout << "Please enter some number: " << endl;
    for (int i = 0; i < limit; i++)
    {
        double temp;
        cin >> temp;
        if (!cin)
        {
            cin.clear();
            while (cin.get() != '\n')
            {
                continue;
            }
            break;
        }
        arr[i] = temp;
        ptr++;
    }
    return ptr;
}

void showArray(double *start, double *end)
{
    double *ptr = start;
    while (ptr != end)
    {
        cout << *ptr++ << " ";
    }
    cout << endl;
}

void revalue(double r, double *start, double *end)
{
    double *ptr = start;
    while (ptr != end)
    {
        (*ptr) *= r;
        ptr++;
    }
}