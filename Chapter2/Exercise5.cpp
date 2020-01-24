//Exercise 5
//Writing time: 2020/1/24

/*
 *Purpose: Write a C++ program, where main() calls a user-defined function(it takes
 Celsius value as the parameter and returns the corresponding Fahrenheit value).
 This program requires user to enter Celsius value in the following format and shows
 the result.
 //Please enter a Celsius value: 20
 //20 degrees Celsius is 68 degrees Fahrenheit.
 Here's the conversion formula:
 Fahrenheit = 1.8 * Celsius + 32.0
 */
      
#include<iostream>
#include<iomanip>
using namespace std;

double celToFah(double);

int main()
{
    double celsius;
    double fahrenheit;

    cout << "Please enter a Celsius value: ";
    cin >> celsius;

    fahrenheit = celToFah(celsius);
    cout << fixed << setprecision(0) << celsius << " degrees Celsius is " 
        << fahrenheit <<" degrees Fahrenheit." << endl;

    system("pause");
    return 0;
}

double celToFah(double cel)
{
    double ret;
    ret = 1.8 * cel + 32.0;

    return ret;
}