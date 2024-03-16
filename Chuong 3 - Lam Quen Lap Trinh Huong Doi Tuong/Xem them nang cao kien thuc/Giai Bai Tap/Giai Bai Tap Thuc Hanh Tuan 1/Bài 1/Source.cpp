#include "PhanSo.h"

int main()
{
	PhanSo ps1, ps2;
	ps1.NhapPhanSo();
	ps1.XuatPhanSo();

	ps2.NhapPhanSo();
	ps2.XuatPhanSo();

	PhanSo Tong = ps1.TinhTong(ps2);
	cout << "\nps1 + ps2 = ";
	Tong.RutGonPhanSo();
	Tong.XuatPhanSo();

	PhanSo Hieu = ps1.TinhHieu(ps2);
	cout << "\nps1 - ps2 = ";
	Hieu.RutGonPhanSo();
	Hieu.XuatPhanSo();

	PhanSo Tich = ps1.TinhTich(ps2);
	cout << "\nps1 * ps2 = ";
	Tich.RutGonPhanSo();
	Tich.XuatPhanSo();

	PhanSo Thuong = ps1.TinhThuong(ps2);
	cout << "\nps1 / ps2 = ";
	Thuong.RutGonPhanSo();
	Thuong.XuatPhanSo();

	if(!ps1.KiemTraLonHon(ps2))
	{
		cout << "\nps1 < ps2";
	}
	else
	{
		cout << "\nps1 > ps2";
	}

	system("pause");
	return 0;
}