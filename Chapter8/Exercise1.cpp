/*
 * @Author: Yang 
 * @Date: 2020-02-13 09:22:54 
 * @Last Modified by: Yang
 * @Last Modified time: 2020-02-13 09:24:37
 */
#include <iostream>
using namespace std;

static int count = 1;

void fun(char *, int n);
void fun(char *);

int main()
{
    char arr[20];
    cin.get(arr, 20);

    fun(arr, 20);
    fun(arr, 20);
    fun(arr, 12);

    system("pause");
    return 0;
}

void fun(char *arr)
{
    cout << arr << endl;
}

void fun(char *arr, int n)
{
    if (0 == n)
    {
        fun(arr);
        return;
    }

    for (int i = 0; i < count; i++)
    {
        cout << arr << endl;
    }
    count++;
}