#pragma once
#include <iostream>
using namespace std;

class PhanSo
{
private:
	int TuSo, MauSo;
public:
	void Nhap();
	void Xuat();
	float TinhKetQuaPhanSo();
	void RutGon();
	PhanSo TinhTong(PhanSo);
	PhanSo TinhHieu(PhanSo);
	PhanSo TinhTich(PhanSo);
	PhanSo TinhThuong(PhanSo);
};

