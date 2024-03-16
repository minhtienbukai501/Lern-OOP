#include "NhanVienCongNhat.h"

void NhanVienCongNhat::Nhap()
{
	NhanVien::Nhap(); // Gọi nhập của cha

	do{
		cout << "\nNhap vao so ngay cong: ";
		cin >> SoNgayCong;

		if(SoNgayCong < 0)
		{
			cout << "\nSo ngay cong khong hop le. Xin kiem tra lai !";
		}
	}while(SoNgayCong < 0);

	id = 1;
}

void NhanVienCongNhat::Xuat()
{
	NhanVien::Xuat(); // Gọi lại Xuat của cha.
	cout << "\nSo ngay cong = " << SoNgayCong;
}

double NhanVienCongNhat::TinhLuong()
{
	return SoNgayCong * 55000;
}

NhanVienCongNhat::NhanVienCongNhat(void)
{
}


NhanVienCongNhat::~NhanVienCongNhat(void)
{
}
