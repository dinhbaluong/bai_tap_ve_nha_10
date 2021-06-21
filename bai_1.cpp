// bai_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*1. Cộng hai số bởi sử dụng con trỏ */

#include <iostream>
using namespace std;
int main()
{
	int* point1 = new int;// cap phat bo nho dong cho bien con tro 
	int* point2 = new int;// cap phat bo nho dong cho bien con tro 
	cout << "nhap so a = ";
	cin >> *point1;
	cout << "\n";
	cout << "nhap so b = ";
	cin >> *point2;
	cout << "\n";
	cout << " tong cua 2 so a va b la : " << (*point1 + *point2);
	return 0;
}

