/*
 * @Author: Yang 
 * @Date: 2020-02-04 17:27:14 
 * @Last Modified by: Yang
 * @Last Modified time: 2020-02-04 18:32:27
 */
#include <iostream>
#include <cstring>
using namespace std;

const int SLEN = 30;

struct student
{
    char fullName[SLEN];
    char hobby[SLEN];
    int ooplevel;
};

int getinfo(student pa[], int n);
void display1(student st);
void display2(const student *pa);
void display3(const student pa[], int n);

int main()
{
    cout << "Enter class size: ";
    int class_size;
    cin >> class_size;
    while (cin.get() != '\n')
        continue;

    student *ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    for (int i = 0; i < entered; i++)
    {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);
    delete[] ptr_stu;
    cout << "Done!" << endl;

    system("pause");
}

int getinfo(student pa[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout << "Enter the name: ";
        cin >> pa[i].fullName;
        cout << "Enter the hobby: ";
        cin >> pa[i].hobby;
        cout << "Enter the ooplevel: ";
        cin >> pa[i].ooplevel;
        while (cin.get() != '\n')
            continue;
    }
    return i;
}

void display1(student st)
{
    cout << "Fullname: " << st.fullName << endl;
    cout << "Hobby: " << st.hobby << endl;
    cout << "Ooplever: " << st.ooplevel << endl
         << endl;
}

void display2(const student *ps)
{
    cout << "Fullname: " << ps->fullName << endl;
    cout << "Hobby: " << ps->hobby << endl;
    cout << "Ooplever: " << ps->ooplevel << endl
         << endl;
}

void display3(const student pa[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Fullname: " << pa[i].fullName << endl;
        cout << "Hobby: " << pa[i].hobby << endl;
        cout << "Ooplever: " << pa[i].ooplevel << endl
             << endl;
    }
}