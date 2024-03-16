#pragma once
#include <iostream>
using namespace std;

class PhanSo
{
private:
	int Tu, Mau;
public:
	PhanSo(void); // mặc định
	PhanSo(int, int); // 2 tham số
	PhanSo(int); // 1 tham số
	PhanSo(const PhanSo &); // sao chép
	~PhanSo(void); // phá hủy
	void Xuat();
	PhanSo Cong(PhanSo);
};

