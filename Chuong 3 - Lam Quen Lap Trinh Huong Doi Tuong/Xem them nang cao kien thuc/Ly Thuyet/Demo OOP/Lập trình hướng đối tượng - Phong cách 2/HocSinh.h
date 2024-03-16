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
	void NhapThongTin();
	void XuatThongTin();
	float TinhDiemTrungBinh();
	HocSinh(void);
	~HocSinh(void);
};

