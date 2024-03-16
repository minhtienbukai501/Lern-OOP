#pragma once
#include "NhanVien.h"

class NhanVienQuanLy : public NhanVien
{
private:
	float HeSoLuong, LuongCanBan;
public:
	void Nhap();
	void Xuat();
	double TinhLuong();
	NhanVienQuanLy(void);
	~NhanVienQuanLy(void);
};

