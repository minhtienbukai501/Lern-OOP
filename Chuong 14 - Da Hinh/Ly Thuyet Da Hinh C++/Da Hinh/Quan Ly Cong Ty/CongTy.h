#pragma once
#include "NhanVienCongNhat.h"
#include "NhanVienQuanLy.h"
#include "NhanVienSanXuat.h"
#include <vector>

class CongTy
{
private:
	vector<NhanVien *> List;
public:
	void Nhap();
	void Xuat();
	double TinhTongLuongCongTy();
	double TimLuongMax();
	void LietKeCacNhanVienLuongMax();
	double TinhLuongNhanVienCongNhat();
	CongTy(void);
	~CongTy(void);
};

