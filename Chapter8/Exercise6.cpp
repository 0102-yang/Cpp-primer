/*
 * @Author: Yang 
 * @Date: 2020-02-13 15:22:28 
 * @Last Modified by: Yang
 * @Last Modified time: 2020-02-13 16:36:12
 */
#include <iostream>
#include <cstring>
using namespace std;

template <typename T>
T maxn(T arr[], int n);
template <>
const char *maxn<const char *>(const char *arr[], int n);

int main()
{
    int ar1[6]{1, 23, 3, 5, 56, 7};
    double ar2[4]{2.6, 4.56, 23.67, 23.2};
    const char *arr[5]{"sdkfsdjf", "sadgsd", "sagsduyt", "dsgd", "sdf"};

    int max1 = maxn(ar1, 6);
    double max2 = maxn(ar2, 4);
    const char *max3 = maxn(arr, 5);

    cout << max1 << endl
         << max2 << endl
         << max3 << endl;

    system("pause");
    return 0;
}

template <typename T>
T maxn(T arr[], int n)
{
    T max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

template <>
const char *maxn<const char *>(const char *arr[], int n)
{
    size_t max = strlen(arr[0]);
    const char *temp = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (strlen(arr[i]) > max)
        {
            temp = arr[i];
        }
    }
    return temp;
}