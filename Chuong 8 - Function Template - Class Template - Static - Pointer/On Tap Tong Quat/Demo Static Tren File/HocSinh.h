#pragma once
#include "Date.h"
#include <string>

class HocSinh
{
private:
	string MaSo, HoTen;
	Date NgaySinh;
public:
	void Nhap();
	void Xuat();
	HocSinh(void);
	~HocSinh(void);
};

