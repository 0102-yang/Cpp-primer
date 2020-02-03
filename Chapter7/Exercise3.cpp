/*
 * @Author: Yang 
 * @Date: 2020-02-03 23:17:56 
 * @Last Modified by: Yang
 * @Last Modified time: 2020-02-03 23:57:05
 */
#include <iostream>
using namespace std;

struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void showBox(box);
void calBox(box *);

int main()
{
    box b = {"Yang", 2, 5, 7, 0};
    box *ptr = &b;
    showBox(b);
    calBox(ptr);
    showBox(b);

    system("pause");
    return 0;
}

void showBox(box b)
{
    cout << "The maker: " << b.maker << endl;
    cout << "The height: " << b.height << endl;
    cout << "The width: " << b.width << endl;
    cout << "The length: " << b.length << endl;
    cout << "The volume: " << b.volume << endl;
    cout << "-------------------------------" << endl;
}

void calBox(box *ptr)
{
    ptr->volume = ptr->height * ptr->length * ptr->width;
}
