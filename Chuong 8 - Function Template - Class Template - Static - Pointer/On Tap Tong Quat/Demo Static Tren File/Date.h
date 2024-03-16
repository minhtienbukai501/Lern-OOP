#pragma once
#include <iostream>
using namespace std;
class Date
{
private:
	int Ngay, Thang, Nam;
public:
	void Nhap();
	void Xuat();
	Date(void);
	~Date(void);
};

