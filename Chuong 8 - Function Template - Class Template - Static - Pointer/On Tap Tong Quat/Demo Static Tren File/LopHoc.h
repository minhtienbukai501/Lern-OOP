#pragma once
#include "HocSinh.h"
#include <fstream>
#include <vector>
class LopHoc
{
private:
	string TenLop;
	HocSinh HS;
public:
	static ifstream FileIn;
	static ofstream FileOut;
public:
	void Nhap();
	void Xuat();
	LopHoc(void);
	~LopHoc(void);
};

