#pragma once
#include <iostream>
using namespace std;

class Diem
{
private:
	float x, y;
public:
	void Nhap();
	void Xuat();

	// d1.TinhKhoangCach(d2);
	float TinhKhoangCach(Diem);
};

