/*
 * @Author: Yang 
 * @Date: 2020-02-03 22:40:37 
 * @Last Modified by: Yang
 * @Last Modified time: 2020-02-03 23:16:13
 */
#include <iostream>
using namespace std;
const int limit = 10;

int enterArray(double *, int);
void showArray(double *, int);
void aveArray(double *, int);

int main()
{
    double *array = new double[limit];
    int size = enterArray(array, limit);
    showArray(array, size);
    aveArray(array, size);
    delete[] array;

    system("pause");
    return 0;
}

int enterArray(double *array, int limit)
{
    cout << "Please enter the grade of golf(not more than 10): ";
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
        array[i] = temp;
    }

    return i;
}

void showArray(double *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

void aveArray(double *array, int size)
{
    double sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += array[i];
    }
    cout << "The average grade of these grades is: " << sum / size << endl;
}