/*
 * @Author: Yang 
 * @Date: 2020-02-04 09:12:43 
 * @Last Modified by: Yang
 * @Last Modified time: 2020-02-04 09:16:39
 */
#include <iostream>
using namespace std;

long double probability(unsigned numbers, unsigned picks);

int main()
{
    cout << "You have one chance in "
         << probability(47, 5) * probability(27, 1)
         << " of winning the first prize." << endl;

    system("pause");
    return 0;
}

long double probability(unsigned numbers, unsigned picks)
{
    long double result = 1.0;
    long double n;
    unsigned p;

    for (n = numbers, p = picks; p > 0; n--, p--)
    {
        result = result * n / p;
    }

    return result;
}