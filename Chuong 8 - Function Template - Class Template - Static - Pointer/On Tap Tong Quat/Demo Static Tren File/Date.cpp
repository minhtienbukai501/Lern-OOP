#include "Date.h"
#include "LopHoc.h"

void Date::Nhap()
{
	LopHoc::FileIn.seekg(1, SEEK_CUR);

	string ngay, thang, nam;
	getline(LopHoc::FileIn, ngay, '/');

	Ngay = atoi(ngay.c_str());

	getline(LopHoc::FileIn, thang, '/');
	
	Thang = atoi(thang.c_str());

	getline(LopHoc::FileIn, nam);
	
	Nam = atoi(nam.c_str());
}

void Date::Xuat()
{
	cout << "\nNgay " << Ngay << " thang " << Thang << " nam " << Nam;
}

Date::Date(void)
{
}


Date::~Date(void)
{
}
