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
	PhanSo TinhTong(PhanSo);
	PhanSo TinhHieu(PhanSo);
	PhanSo TinhTich(PhanSo);
	PhanSo TinhThuong(PhanSo);
	void RutGonPhanSo();
	PhanSo(void);
	~PhanSo(void);
};

