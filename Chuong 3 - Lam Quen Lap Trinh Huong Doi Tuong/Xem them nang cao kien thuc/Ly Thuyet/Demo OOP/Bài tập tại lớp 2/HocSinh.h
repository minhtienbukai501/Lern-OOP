#pragma once
#include "Ngay.h"
#include <string>

class HocSinh
{
private:
	string MaSo, HoTen;
	Ngay NgaySinh;
public:
	void NhapHocSinh();
	void XuatHocSinh();
	HocSinh(void);
	~HocSinh(void);
};

