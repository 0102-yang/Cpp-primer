/*
 * @Author: Yang 
 * @Date: 2020-02-13 09:31:38 
 * @Last Modified by: Yang
 * @Last Modified time: 2020-02-13 09:43:46
 */
#include <iostream>
#include <string>
using namespace std;

struct CandyBar
{
    string brand;
    double weight;
    int heat;
};

void showCandyBar(const CandyBar &);
void enterCandyBar(CandyBar &, const char *brand = "Millennium Munch", const double weight = 2.85,
                   const int heat = 350);

int main()
{
    CandyBar c1, c2;
    enterCandyBar(c1);
    showCandyBar(c1);
    char arr[20];
    double weight;
    int heat;
    (cin.get(arr, 20)) >> weight >> heat;
    enterCandyBar(c2, arr, weight, heat);
    showCandyBar(c2);

    system("pause");
    return 0;
}

void showCandyBar(const CandyBar &can)
{
    cout << "The brand is " << can.brand << endl;
    cout << "The weight is " << can.weight << endl;
    cout << "The heat is " << can.heat << endl;
}

void enterCandyBar(CandyBar &can, const char *brand, const double weight, const int heat)
{
    can.brand = brand;
    can.weight = weight;
    can.heat = heat;
}