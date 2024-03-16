#include "Ngay.h"

void Ngay::Nhap()
{
	cout << "\nNhap ngay: ";
	cin >> ngay;

	cout << "\nNhap thang: ";
	cin >> thang;
	
	cout << "\nNhap nam: ";
	cin >> nam;
}

void Ngay::Xuat()
{
	cout << "Ngay " << ngay << " thang " << thang << " nam " << nam;
}
