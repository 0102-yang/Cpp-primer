/*
 * @Author: Yang 
 * @Date: 2020-02-13 14:56:09 
 * @Last Modified by: Yang
 * @Last Modified time: 2020-02-13 15:13:18
 */
#include <iostream>
#include <cstring>
using namespace std;

struct stringy
{
    char *str;
    int ct;
};

void set(stringy &, const char *);
void show(const stringy &, const int = 1);
void show(const char *, const int = 1);

int main()
{
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";

    set(beany, testing);

    show(beany);
    show(beany, 2);

    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing, 3);

    show("Done!");
    system("pause");
    return 0;
}

void set(stringy &temp, const char *ptr)
{
    temp.ct = strlen(ptr);
    temp.str = new char(temp.ct + 1);
    for (int i = 0; i < strlen(ptr); i++)
    {
        temp.str[i] = ptr[i];
    }
}

void show(const stringy &temp, const int count)
{
    for (int i = 0; i < count; i++)
    {
        cout << temp.str << endl;
    }
}

void show(const char *temp, const int count)
{
    for (int i = 0; i < count; i++)
    {
        cout << temp << endl;
    }
}