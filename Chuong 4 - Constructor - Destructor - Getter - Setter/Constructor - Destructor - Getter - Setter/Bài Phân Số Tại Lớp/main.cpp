#include "PhanSo.h"

int main()
{
	PhanSo a;
	a.Xuat();
	PhanSo b(1, 2);
	b.Xuat();
	PhanSo c(3, 4);
	c.Xuat();
	PhanSo d(3);
	d.Xuat();
	PhanSo e(-5);
	e.Xuat();
	PhanSo f(c);
	f.Xuat();
	a = b.Cong(c);
	a.Xuat();

	system("pause");
	return 0;
}