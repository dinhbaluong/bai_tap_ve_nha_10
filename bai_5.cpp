// bai_5.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*5. Sử dụng con trỏ để duyệt một mảng các số nguyên và in các giá trị theo thứ tự đảo ngược*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << " nhap n = ";
    cin >> n;
    cout << "\n";
    int* point = new int[n];//cap phat 1 mang dong gom n phan tu so nguyen cho vien con tro
    cout << " nhap mang : \n";
    for (int i = 0; i < n; i++)
    {
        cout << " mang[" << i << "] = ";
        cin >> *(point + i);
        cout << "\n";
    }
    cout << " in cac gia tri trong mang theo thu tu dao nguoc : ";
    for (int i = n-1; i >=0; i--)
    {
        cout << *(point + i) << "\t";
    }
    return 0;
}
