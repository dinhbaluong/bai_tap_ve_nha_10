// bai_6.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*6. Cấp phát một mảng động
- Thay đổi kích thước mảng 
- Thêm phần tử vào mảng
- Xóa phần tử mảng
- Tìm vị trí của phần tử mảng bất kì khi người dùng muốn tìm kiếm*/

#include <iostream>
using namespace std;
int main()
{
	int size, newsize, them;
	cout << " nhap kich thuoc ban dau cua mang : ";
	cin >> size;
	cout << "\n";
	int* mang1 = new int[size];//  cap phat mang dong cho bien con tro 
	// nhap cac phan tu trong mang
	cout << " nhap mang : \n";
	for (int i = 0; i < size; i++)
	{
		cout << " mang[" << i << "] = ";
		cin >> *(mang1 + i);
		cout << "\n";
	}
	// tang kich thuc mang ban dau len
	cout << " nhap kich thuoc moi cua mang : ";
	cin >> newsize;
	cout << "\n";
	int* mang2 = new int[newsize];
	for (int i = 0; i < newsize; i++)
	{
		mang2[i] = mang1[i];// gan cac gia tri cac phan tu cua mang ban dau cho mang moi
	}
	delete mang1;
	// them phan tu va mang
	do
	{
		cout << " nhap so phan tu muon them vao mang : ";
		cin >> them;
		cout << "\n";
	} while (them > (newsize - size));// neu them vuot qua kich thuoc con lai cua mang thi xin moi nhap lai
	cout << " nhap gia tri cac phan tu them vao mang : ";
	for (int i = size; i < (size+them); i++)
	{
		cout << " mang[" << i << "] = ";
		cin >> *(mang2 + i);
		cout << "\n";
	}
	// xuat mang sau khi them phan tu 
	cout << " mang sau khi them pha tu la : ";
	for (int i = 0; i < (size + them); i++)
	{
		cout << *(mang2 + i) << "\t";
	}
	cout << "\n";
	// xoa phan tu cua mang 
	int xoa;
	cout << " nhap vi tri cua phan tu muon xoa trong mang : ";
	cin >> xoa;
	cout << "\n";
	int kt = 0;
	for (int i = 0; i < (size + them); i++)
	{
	   if (mang2[i] == mang2[xoa])
	   {
		  kt = 1;
	   }
	   if (kt == 1)
	   {
		  mang2[i] = mang2[i + 1];
	   }
	}
	if (kt == 1)
	{
		size + them--;// giam so phan tu xet trong mang xuong - 1 phan tu 
	}
	cout << " mang sau khi xoa 1 phan tu la : ";
	for (int i = 0; i < (size+them); i++)
	{
		cout << *(mang2 + i) << "\t";
	}
	cout << "\n";
	//Tìm vị trí của phần tử mảng bất kì khi người dùng muốn tìm kiếm
	int phantu,kt1=0;
	cout << " nhap phan tu muon tim kiem o trong mang : ";
	cin >> phantu;
	cout << "\n";
	for (int i = 0; i < (size + them); i++)
	{
		if (phantu == mang2[i])
		{
			cout << " vi tri cua phan tu " << phantu << " trong mang la " << i;
			kt1 = 1;
		}
	}
	if (kt1 == 0)
	{
		cout << " khong tim thay phan tu trong mang";
	}
	return 0;
}
