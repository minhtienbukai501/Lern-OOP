#include "SinhVien.h"

void SinhVien::NhapSinhVien()
{
	fflush(stdin);
	cout << "\nNhap ma so: ";
	getline(cin, MaSo);

	fflush(stdin);
	cout << "\nNhap ho ten: ";
	getline(cin, HoTen);

	fflush(stdin);
	cout << "\nNhap lop: ";
	getline(cin, Lop);

	fflush(stdin);
	cout << "\nNhap CMND: ";
	getline(cin, CMND);

	cout << "\nNhap ngay sinh: ";
	NgaySinh.NhapNgay();

	do{
		cout << "\nNhap diem thi chuyen nganh: ";
		cin >> DiemThi;

		if(DiemThi < 0 || DiemThi > 10)
		{
			cout << "\nDiem thi khong hop le. Xin kiem tra lai !";
		}
	}while(DiemThi < 0 || DiemThi > 10);
}

void SinhVien::XuatSinhVien()
{
	cout << "\nMa so: " << MaSo;
	cout << "\nHo ten: " << HoTen;
	cout << "\nLop: " << Lop;
	cout << "\nCMND: " << CMND;
	cout << "\nNgay sinh: ";
	NgaySinh.XuatNgay();
	cout << "\nDiem thi: " << DiemThi;
}

float SinhVien::LayDiemThi()
{
	return DiemThi;
}

string SinhVien::LayHoTen()
{
	return HoTen;
}

SinhVien::SinhVien(void)
{
}


SinhVien::~SinhVien(void)
{
}
