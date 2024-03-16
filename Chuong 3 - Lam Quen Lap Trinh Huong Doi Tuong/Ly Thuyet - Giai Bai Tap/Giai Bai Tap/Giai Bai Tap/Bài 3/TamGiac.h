#pragma once
#include "Diem.h"

class TamGiac
{
private:
	Diem A, B, C;
public:
	void Nhap();
	void Xuat();
	bool KiemTraTamGiacHopLe();
	float TinhChuVi();
	float TinhDienTich();
};

