#include "TamGiac.h"

int main()
{
	/*Diem *d1;
	d1 = new Diem;

	d1->Nhap();
	d1->Xuat();*/

	//delete d1;

	TamGiac tg;

	tg.Nhap();
	tg.Xuat();
	float ChuVi = tg.TinhChuVi();
	float DienTich = tg.TinhDienTich();

	cout << "\nChu vi = " << ChuVi;
	cout << "\nDien tich = " << DienTich;

	system("pause");
	return 0;
}