#include "NhanVienQuanLy.h"

void NhanVienQuanLy::Nhap()
{
	NhanVien::Nhap(); // Gọi nhập của cha

	do{
		cout << "\nNhap vao he so luong: ";
		cin >> HeSoLuong;

		if(HeSoLuong < 0)
		{
			cout << "\nHe so luong khong hop le. Xin kiem tra lai !";
		}
	}while(HeSoLuong < 0);

	do{
		cout << "\nNhap vao luong can ban: ";
		cin >> LuongCanBan;

		if(LuongCanBan < 0)
		{
			cout << "\nLuong can ban khong hop le. Xin kiem tra lai !";
		}
	}while(LuongCanBan < 0);

	id = 3;
}

void NhanVienQuanLy::Xuat()
{
	NhanVien::Xuat(); // Gọi lại Xuat của cha.
	cout << "\nHe so luong = " << HeSoLuong;
	cout << "\nLuong can ban = " << (size_t)LuongCanBan;
}

double NhanVienQuanLy::TinhLuong()
{
	return HeSoLuong * LuongCanBan;
}

NhanVienQuanLy::NhanVienQuanLy(void)
{
}


NhanVienQuanLy::~NhanVienQuanLy(void)
{
}
