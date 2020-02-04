/*
 * @Author: Yang 
 * @Date: 2020-02-04 09:35:19 
 * @Last Modified by: Yang
 * @Last Modified time: 2020-02-04 10:11:12
 */
#include <iostream>
using namespace std;

const int limit = 20;

int fillArray(double[], int limit);
void showArray(double[], int size);
void reverseArray(double[], int size);

int main()
{
    double arr[limit];
    int size = fillArray(arr, limit);
    showArray(arr, size);
    reverseArray(arr, size);
    showArray(arr, size);

    system("pause");
    return 0;
}

int fillArray(double arr[], int limit)
{
    cout << "Please enter double number: ";
    int i;
    for (i = 0; i < limit; i++)
    {
        double temp;
        cin >> temp;
        if (!cin)
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            break;
        }
        arr[i] = temp;
    }
    return i;
}

void showArray(double arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void reverseArray(double arr[], int size)
{
    for (int i = 0, j = size - 1; i < j; i++, j--)
    {
        double temp;
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}