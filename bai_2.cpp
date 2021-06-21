// bai_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*2. Tráo đổi hai giá trị bởi sử dụng con trỏ */

#include <iostream>
using namespace std;
void swap(int*& a, int*& b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a, b;
    cout << " nhap so a = ";
    cin >> a;
    cout << "\n";
    cout << " nhap so b = ";
    cin >> b;
    cout << "\n";
    cout << " hoan doi 2 so a va b \n";
    swap(a, b);
    cout << "a = " << a;
    cout << "\n";
    cout << "b = " << b;
    return 0;
}

