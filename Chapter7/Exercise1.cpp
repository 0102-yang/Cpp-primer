/*
 * @Author: Yang 
 * @Date: 2020-02-03 22:40:16 
 * @Last Modified by: Yang
 * @Last Modified time: 2020-02-03 22:55:06
 */
#include <iostream>
using namespace std;

double har(double, double);

int main()
{
    double x, y;
    cout << "Enter two numbers: ";

    while ((cin >> x >> y) && x * y != 0)
    {
        double harmonicMean = har(x, y);
        cout << "The harmonic mean of " << x << " and " << y
             << " is " << harmonicMean << endl;
        cout << "Enter two numbers: ";
    }

    system("pause");
    return 0;
}

double har(double x, double y)
{
    return 2.0 * x * y / (x + y);
}