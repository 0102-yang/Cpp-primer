/*
 * @Author: Yang 
 * @Date: 2020-02-13 14:42:42 
 * @Last Modified by: Yang
 * @Last Modified time: 2020-02-13 14:55:06
 */
#include <iostream>
#include <string>
using namespace std;

void transformToUpper(string &temp);

int main()
{
    string temp;
    cout << "Enter a string (q to quit): ";
    getline(cin, temp);
    while (temp != "q")
    {
        transformToUpper(temp);
        cout << temp << endl;
        cout << "Enter a string (q to quit): ";
        getline(cin, temp);
    }

    system("pause");
    return 0;
}

void transformToUpper(string &temp)
{
    for (int i = 0; i < temp.size(); i++)
    {
        if (islower(temp[i]))
            temp[i] = toupper(temp[i]);
    }
}