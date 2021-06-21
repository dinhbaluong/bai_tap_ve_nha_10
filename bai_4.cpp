// bai_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*4. Tìm độ dài chuỗi bởi sử dụng con trỏ */

#include <iostream>
using namespace std;
int length(char chuoi[50])// ham tinh chieu dai chuoi 
{
    char* a = chuoi;// su dung con tro de xu ly mang chua chuoi ky tu 
    int counter = 0;
    for (int i = 0; i < 50; i++)
    {
        counter++;
        if (*(a + i) == '\0')
        {
            break;
        }
    }
    return counter;
}
int main()
{
    char chuoi[50];
    int chieu_dai;
    cout << " nhap chuoi : ";
    cin >> chuoi;
    cout << "\n";
    chieu_dai=length(chuoi);
    cout << " chieu dai chuoi (tinh ca ky tu ket thuc chuoI null) la = " << chieu_dai;
    return 0;
}
