#include "LopHoc.h"

// Khai báo lại.
ifstream LopHoc::FileIn;
ofstream LopHoc::FileOut;

void LopHoc::Nhap()
{
	getline(FileIn, TenLop, '-');
	
	// Xóa khoảng trắng cuối.
	TenLop.erase(TenLop.length() - 1);

	HS.Nhap();
}

void LopHoc::Xuat()
{
	cout << "\nTen lop: " << TenLop;
	HS.Xuat();
}


LopHoc::LopHoc(void)
{
}


LopHoc::~LopHoc(void)
{
}
