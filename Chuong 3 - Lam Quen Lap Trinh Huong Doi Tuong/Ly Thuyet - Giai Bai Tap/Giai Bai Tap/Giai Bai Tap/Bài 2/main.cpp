#include "PhanSo.h"
#include <vector>

int main()
{
	PhanSo ps1, ps2;

	/*ps1.Nhap();
	ps1.Xuat();
	float Kq = ps1.TinhKetQuaPhanSo();
	if(Kq > 0)
	{
		cout << "\nps1 > 0";
	}
	else if(Kq < 0)
	{
		cout << "\nps1 < 0";
	}
	else
	{
		cout << "\nps1 = 0";
	}

	cout << "\nPhan so sau khi rut gon la: ";
	ps1.RutGon();
	ps1.Xuat();*/

	cout << "\nNhap ps1: ";
	ps1.Nhap();

	cout << "\nNhap ps2: ";
	ps2.Nhap();

	PhanSo Tong = ps1.TinhTong(ps2);
	PhanSo Hieu = ps1.TinhHieu(ps2);
	PhanSo Tich = ps1.TinhTich(ps2);
	PhanSo Thuong = ps1.TinhThuong(ps2);

	cout << "\nTong = ";
	Tong.RutGon();
	Tong.Xuat();

	cout << "\nHieu = ";
	Hieu.RutGon();
	Hieu.Xuat();

	cout << "\nTich = ";
	Tich.RutGon();
	Tich.Xuat();

	cout << "\nThuong = ";
	Thuong.RutGon();
	Thuong.Xuat();

	/*PhanSo ps1, ps2, ps3, ps4;

	PhanSo Tong;

	Tong = ps1.TinhTong(ps2);
	Tong = Tong.TinhTong(ps3);
	Tong = Tong.TinhTong(ps4);*/



	// a + b + c + d

	//vector<PhanSo> arr;

	//arr.resize(5); // có 5 phân số

	//PhanSo Tong = arr[0];

	//int size = arr.size();
	//for(int i = 1; i < size; i++)
	//{
	//	Tong = Tong.TinhTong(arr[i]);
	//}

	system("pause");
	return 0;
}