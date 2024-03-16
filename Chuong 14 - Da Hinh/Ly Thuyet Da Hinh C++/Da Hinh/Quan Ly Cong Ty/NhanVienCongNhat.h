#pragma once
#include "NhanVien.h"

class NhanVienCongNhat : public NhanVien
{
private:
	int SoNgayCong;
public:
	void Nhap();
	void Xuat();
	double TinhLuong();
	NhanVienCongNhat(void);
	~NhanVienCongNhat(void);
};

