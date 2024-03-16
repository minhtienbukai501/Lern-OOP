#pragma once
#include <iostream>
using namespace std;

class Diem
{
private:
	float HoanhDo, TungDo;
public:
	void NhapDiem();
	void XuatDiem();
	float TinhKhoangCach(Diem);

	Diem(void);
	~Diem(void);
};

