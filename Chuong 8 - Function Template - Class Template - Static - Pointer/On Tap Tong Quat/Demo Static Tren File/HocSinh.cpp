#include "HocSinh.h"
#include "LopHoc.h"

void HocSinh::Nhap()
{
	LopHoc::FileIn.seekg(1, SEEK_CUR);
	
	getline(LopHoc::FileIn, MaSo, '-');

	// Xóa khoảng trắng cuối
	MaSo.erase(MaSo.length() - 1);

	LopHoc::FileIn.seekg(1, SEEK_CUR);

	getline(LopHoc::FileIn, HoTen, '-');

	// Xóa khoảng trắng cuối
	HoTen.erase(HoTen.length() - 1);

	NgaySinh.Nhap();
}

HocSinh::HocSinh(void)
{
}


HocSinh::~HocSinh(void)
{
}

void HocSinh::Xuat()
{
	cout << "\nMa so: " << MaSo;
	cout << "\nHo ten: " << HoTen;
	cout << "\nNgay sinh: ";
	NgaySinh.Xuat();
}