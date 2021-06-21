// bai_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*Tính tổng giá trị các phần tử trong mảng bởi sử dụng con trỏ*/

#include <iostream>
using namespace std;
int main()
{
	int n, sum = 0;
	cout << " nhap so phan tu co trong mang n = ";
	cin >> n;
	cout << "\n";
	int* point = new int[n];// cap phat mot mang dong gom n phan tu cho bien con tro 
	// nhap cac phan tu trong mang
	cout << " nhap mang : \n";
	for (int i = 0; i < n; i++)
	{
		cout << " mang[" << i << "] = ";
		cin >> *(point + i);
		cout << "\n";
	}
	// tinh tong
	for (int i = 0; i < n; i++)
	{
		sum = sum + *(point + i);
	}
	cout << " tong cac gia tri phan tu co o trong mang la = " << sum;
	return 0;
}

