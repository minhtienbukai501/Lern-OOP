#include "PhanSo.h"
#include <fstream>

int main()
{
	//PhanSo a(1, 2), b(3, 4), c(5, 6), d(7, 8);

	////PhanSo Tong = a.TinhTong(b).TinhTong(c).TinhTong(d);
	//PhanSo Tong = a + b + c + d;
	//cout << "\na + b + c + d = ";
	//Tong.Xuat();

	//// int + phanso
	//PhanSo Tong_1 = 5 + a;
	//cout << "\na + 5 = ";
	//Tong_1.Xuat();

	/* 
	a.Nhap();
	b.Nhap();
	c.Nhap();
	d.Nhap();

	cin >> a >> b >> c >> d;

	*/

	PhanSo ps1;
	//cin >> ps1;
	//cout << ps1;

	//cin >> ps1;

	/*ifstream FileIn("INPUT.txt");

	FileIn >> ps1;

	FileIn.close();*/


	/*ofstream FileOut("OUTPUT.txt");

	FileOut << ps1;

	FileOut.close();*/

	//cout << ps1;

	PhanSo x1(1, 2), x2(3, 4);
	HoTro();
	//x1 = x1 + x2;
	x1 += x2;
	cout << "\nx1 = " << x1;

	system("pause");
	return 0;
}