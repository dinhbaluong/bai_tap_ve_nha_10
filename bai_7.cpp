// bai_7.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*7. Bài toán sinh viên:
- Nhập tên, điểm 3 môn toán, lý, hóa. Tính điểm trung bình và xếp loại sinh viên
B1: nhập 10 sinh viên 
B2: Hỏi người dùng có muốn tiếp tục hay không nếu không thì tắt chương trình và lưu dữ liệu ra file
B3: Nếu tiếp tục thì có người dùng nhập tiếp  sau đó lại quay lại B2.
*/

#include <iostream>
#include <fstream>
#include<string>
using namespace std;
int main()
{
    int luachon, k = 10, i = 0;
    fstream f;
    string* hovaten=new string[100];
    float* toan = new float[100];
    float* ly = new float[100];
    float* hoa = new float[100];
    float* dtb = new float[100];
    char* xeploai = new char[100];
    // nhap sinh vien
    do
    {
        cout << "nhap danh sach sinh vien : \n";
        for ( i = i; i < k; i++)
        {
            cout << "ho va ten : ";
            cin >> *(hovaten + i);
            cout << " ";
            cout << " diem toan = ";
            cin >> *(toan + i);
            cout << " ";
            cout << " diem ly = ";
            cin >> *(ly + i);
            cout << " ";
            cout << " diem hoa = ";
            cin >> *(hoa + i);
            cout << " ";
            *(dtb + i) = (*(toan + i) + *(ly + i) + *(hoa + i)) / 3;
            // xep loai sinh vien 
            if (*(dtb + i) >= 9)
            {
                *(xeploai + i) = 'A';
            }
            else if (*(dtb + i) >= 7 && *(dtb + i) < 9)
            {
                *(xeploai + i) = 'B';
            }
            else if (*(dtb + i) >= 5 && *(dtb + i) < 7)
            {
                *(xeploai + i) = 'C';
            }
            else
            {
                *(xeploai + i) = 'D';
            }
        }
        //xet dieu kien tiep tuc hoac dung nhap thong tin 
        cout << " lua chon :  tiep tuc nhap : nhan so 1 -- hoac -- dung nhap : nhan so 0 : ";
        cin >> luachon;
        cout << "\n";
        if (luachon == 0)
        {
            f.open("D:\\data\\danh_sach_sinh_vien.txt", ios::out);
            for (int j = 0; j < k; j++)
            {
                f << "ho va ten : " << *(hovaten+j) << " diem toan : " << *(toan+j) << " diem ly : " << *(ly+j) << " diem hoa : " << *(hoa+j) << " xep loai : " << *(xeploai+j) << " \n";
            }
            f.close();
            break;
        }
        else
        {
            i++;// tai vi tai gia tri i ban dau ta da nhap xong xuoi roi bay gio phai tang i len de nhap gia tri tiep theo vao
            k = k + 10;
        }
    } while (k < 100);
    return 0;
}

