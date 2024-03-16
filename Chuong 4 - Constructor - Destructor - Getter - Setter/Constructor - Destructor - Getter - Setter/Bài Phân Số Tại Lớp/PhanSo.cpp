#include "PhanSo.h"

// mặc định
PhanSo::PhanSo(void)
{
	Tu = 0;
	Mau = 1;
}

// 2 tham số
PhanSo::PhanSo(int ts, int ms)
{
	Tu = ts;
	Mau = ms;
}

// 1 tham số
PhanSo::PhanSo(int ts)
{
	Tu = ts;
	Mau = 1; // gán mặc định
}

// sao chép
PhanSo::PhanSo(const PhanSo &ps)
{
	Tu = ps.Tu;
	Mau = ps.Mau;
}

// hủy
PhanSo::~PhanSo(void)
{
}

void PhanSo::Xuat()
{
	cout << Tu << "/" << Mau << endl;
}

PhanSo PhanSo::Cong(PhanSo ps)
{
	PhanSo Tong;

	Tong.Tu = Tu * ps.Mau + Mau * ps.Tu;
	Tong.Mau = Mau * ps.Mau;

	return Tong;
}