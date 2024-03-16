#include "Ngay.h"

void Ngay::NhapNgay()
{
	cout << "\nNhap vao ngay: ";
	cin >> _Ngay;

	cout << "\nNhap vao thang: ";
	cin >> _Thang;

	cout << "\nNhap vao nam: ";
	cin >> _Nam;
}

void Ngay::XuatNgay()
{
	cout << "\nNgay " << _Ngay << " thang " << _Thang << " nam " << _Nam;
}

Ngay::Ngay(void)
{
}


Ngay::~Ngay(void)
{
}
