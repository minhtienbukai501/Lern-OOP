#pragma once
#include <iostream>
using namespace std;

class PhanSo
{
private:
	int TuSo, MauSo;
public:
	void NhapPhanSo();
	void XuatPhanSo();
	void RutGonPhanSo();
	PhanSo TinhTong(PhanSo);
	PhanSo TinhHieu(PhanSo);
	PhanSo TinhTich(PhanSo);
	PhanSo TinhThuong(PhanSo);
	bool KiemTraLonHon(PhanSo); // true: ps1 > ps2, false: ps1 < ps2

	PhanSo(void);
	~PhanSo(void);
};

