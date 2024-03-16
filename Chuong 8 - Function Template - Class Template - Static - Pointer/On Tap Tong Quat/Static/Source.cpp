#include <iostream>
using namespace std;

class PhanSo
{
private:
	int TuSo, MauSo;
public:
	static int SoLuong; // Biến tĩnh

	void Nhap();
	void Xuat();

	PhanSo()
	{                 
		SoLuong++;
	}

	static void KiemTra()
	{
		// TuSo; // Lỗi vì TuSo không phải static

	}
};

int PhanSo::SoLuong; // Khai báo ra.

int main()
{
	PhanSo::SoLuong = 0; // Khởi tạo.

	PhanSo a, b, c, d, e, f, g;
	
	cout << "\nSo luong cac phan so la: " << a.SoLuong;

	system("pause");
	return 0;
}
