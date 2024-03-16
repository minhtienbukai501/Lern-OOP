#pragma once
#include <iostream>
#include <string>
using namespace std;

class HocSinh
{
private:
	string Ten;
	float DiemToan, DiemVan;
public:
	void Nhap();
	void Xuat();
	float TinhDiemTrungBinh();
};

