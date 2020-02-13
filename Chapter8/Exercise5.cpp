/*
 * @Author: Yang 
 * @Date: 2020-02-13 15:14:02 
 * @Last Modified by: Yang
 * @Last Modified time: 2020-02-13 15:21:46
 */
#include <iostream>
using namespace std;

template <typename T>
T max5(T arr[]);

int main()
{
    int arr[5]{1, 23, 4, 5, 78};
    double arr2[5]{2.3, 4.5, 5.6, 678.5, 12.2};
    int max1 = max5(arr);
    double max2 = max5(arr2);
    cout << max1 << endl
         << max2 << endl;

    system("pause");
    return 0;
}

template <typename T>
T max5(T arr[])
{
    T max = arr[0];
    for (int i = 1; i < 5; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}