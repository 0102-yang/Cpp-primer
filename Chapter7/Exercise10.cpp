/*
 * @Author: Yang 
 * @Date: 2020-02-04 18:38:51 
 * @Last Modified by: Yang
 * @Last Modified time: 2020-02-04 18:46:29
 */
#include <iostream>
using namespace std;

double calculate(double, double, double (*fun)(double, double));
double add(double, double);

int main()
{
    cout << calculate(10, 20, add) << endl;

    system("pause");
    return 0;
}

double calculate(double a, double b, double (*fun)(double, double))
{
    return fun(a, b);
}

double add(double a, double b)
{
    return a + b;
}