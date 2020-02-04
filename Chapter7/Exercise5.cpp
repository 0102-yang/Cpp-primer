/*
 * @Author: Yang 
 * @Date: 2020-02-04 09:24:11 
 * @Last Modified by: Yang
 * @Last Modified time: 2020-02-04 09:34:23
 */
#include <iostream>
using namespace std;

long double factorial(int number);

int main()
{
    int number;
    cout << "Please enter a number: ";
    cin >> number;

    long double ret = factorial(number);
    cout << "The factorial of " << number << " is " << ret << "." << endl;

    system("pause");
    return 0;
}

long double factorial(int number)
{
    if (number == 0)
    {
        return 1;
    }
    else
    {
        return number * factorial(number - 1);
    }
}
