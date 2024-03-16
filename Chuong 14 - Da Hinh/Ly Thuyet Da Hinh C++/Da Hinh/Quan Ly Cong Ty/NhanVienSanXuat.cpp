#include "NhanVienSanXuat.h"

void NhanVienSanXuat::Nhap()
{
	NhanVien::Nhap(); // Gọi nhập của cha

	do{
		cout << "\nNhap vao so san pham: ";
		cin >> SoSanPham;

		if(SoSanPham < 0)
		{
			cout << "\nSo san pham khong hop le. Xin kiem tra lai !";
		}
	}while(SoSanPham < 0);

	id = 2;
}

void NhanVienSanXuat::Xuat()
{
	NhanVien::Xuat(); // Gọi lại Xuat của cha.
	cout << "\nSo san pham = " << SoSanPham;
}

double NhanVienSanXuat::TinhLuong()
{
	return SoSanPham * 20000;
}

NhanVienSanXuat::NhanVienSanXuat(void)
{
}


NhanVienSanXuat::~NhanVienSanXuat(void)
{
}
