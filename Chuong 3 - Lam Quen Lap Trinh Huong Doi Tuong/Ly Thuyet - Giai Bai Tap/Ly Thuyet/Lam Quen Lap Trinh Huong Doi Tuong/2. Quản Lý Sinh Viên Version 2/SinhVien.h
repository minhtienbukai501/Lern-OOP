#pragma once
#include "Ngay.h"
#include <string>
using namespace std;

class SinhVien
{
private:
	string Ten;
	float DiemToan, DiemVan;
	Ngay NgaySinh;
public:
	void Nhap();
	void Xuat();
	float TinhDiemTrungBinh();
};

