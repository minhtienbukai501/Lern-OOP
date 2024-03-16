#include "Diem.h"

int main()
{
	Diem d1, d2;
	d1.NhapDiem();
	cout << "\nd1";
	d1.XuatDiem();

	d2.NhapDiem();
	cout << "\nd2";
	d2.XuatDiem();

	float KhoangCach = d1.TinhKhoangCach(d2);
	cout << "\nKhoang cach " << KhoangCach;

	system("pause");
	return 0;
}