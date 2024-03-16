#include "PhanSo.h"

int main()
{
	/*PhanSo a, b;

	cout << "\nNhap phan so a: ";
	a.NhapPhanSo();

	cout << "\nNhap phan so b: ";
	b.NhapPhanSo();

	a.RutGonPhanSo();

	cout << "\nA + B = ";*/
	//PhanSo Tong = a.TinhTong(b);
	//Tong.RutGonPhanSo();
	//Tong.XuatPhanSo();

	PhanSo arr[3];
	int n = 3;

	for(int i = 0; i < n; i++)
	{
		cout << "\nNhap thong tin phan so thu " << i + 1 << " \n";
		arr[i].NhapPhanSo();
	}

	// Tính tổng của mảng phân số.
	PhanSo Tong;
	
	for(int i = 0; i < n; i++)
	{
		Tong = arr[i].TinhTong(Tong);
	}

	cout << "\nTong cac phan so la: ";
	Tong.XuatPhanSo();

	system("pause");
	return 0;
}