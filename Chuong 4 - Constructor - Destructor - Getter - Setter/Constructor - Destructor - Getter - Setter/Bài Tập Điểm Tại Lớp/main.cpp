#include "Diem.h"

int main()
{
	Diem d1(1, 2);
	Diem d2(5, 8);
	Diem d3; // (0, 0)
	Diem d4(d1); // (1, 2)

	cout << "\nd1";
	d1.Xuat();

	cout << "\nd2";
	d2.Xuat();

	cout << "\nd3";
	d3.Xuat();

	cout << "\nd4";
	d4.Xuat();

	float khoangcach = d1.TinhKhoangCach(d2);
	cout << "\nKhoang cach = " << khoangcach;

	system("pause");
	return 0;
}