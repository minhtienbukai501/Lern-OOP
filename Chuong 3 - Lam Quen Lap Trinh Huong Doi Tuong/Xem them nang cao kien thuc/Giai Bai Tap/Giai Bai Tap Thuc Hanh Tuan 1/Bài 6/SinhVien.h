#pragma once
#include "Ngay.h"
#include <string>

class SinhVien
{
private:
	string MaSo, HoTen, Lop, CMND;
	Ngay NgaySinh;
	float DiemThi;
public:
	void NhapSinhVien();
	void XuatSinhVien();
	float LayDiemThi();
	string LayHoTen();

	SinhVien(void);
	~SinhVien(void);
};

