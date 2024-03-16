#include "HocSinh.h"

void HocSinh::NhapHocSinh()
{
	fflush(stdin);
	cout << "\nNhap ma so: ";
	getline(cin, MaSo);

	fflush(stdin);
	cout << "\nNhap ho ten: ";
	getline(cin, HoTen);

	cout << "\nNhap ngay sinh: ";
	NgaySinh.NhapNgay();
}

void HocSinh::XuatHocSinh()
{
	cout << "\nMa so: " << MaSo;
	cout << "\nHo ten: " << HoTen;
	cout << "\nNgay sinh: ";
	NgaySinh.XuatNgay();
}

HocSinh::HocSinh(void)
{
}


HocSinh::~HocSinh(void)
{
}
