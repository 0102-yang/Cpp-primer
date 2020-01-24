//Exercise 6
//Writing time: 2020/1/24

/*
 *Purpose: Write a C++ program, where main() calls a user-defined function(it takes
 light year value as the parameter and returns the corresponding AU value).
 This program requires user to enter light year value in the following format 
 and shows the result.
 //Enter the number of light years: 4.2
 //4.2 light years = 265608 astronomical units.
 The AU(Astronomical Unit) is the average distance between the sun and the earth,
 a light year is the distance that light travels in one year(About 10 trillion 
 kilometers or 6 trillion kilometers)(The most nearest star is about 4.2 light
 years from earth except the sun).Please use the double type(See list 2.4),
 Here's the conversion formula:
 1 ly = 63240 AU
 */
      
#include<iostream>
#include<iomanip>
using namespace std;

double lyToAU(double);

int main()
{
    double ly;
    double au;

    cout << "Enter the number of light years: ";
    cin >> ly;

    au = lyToAU(ly);
    cout << fixed << setprecision(1) << ly << " light years = "
        << setprecision(0) << au << " astronomical units." << endl;

    system("pause");
    return 0;
}

double lyToAU(double ly)
{
    double ret;
    ret = 63240 * ly;

    return ret;
}