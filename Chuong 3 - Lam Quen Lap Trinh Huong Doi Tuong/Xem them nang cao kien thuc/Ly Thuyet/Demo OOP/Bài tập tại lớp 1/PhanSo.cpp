#include "PhanSo.h"

int TimUCLN(int, int);

void PhanSo::NhapPhanSo()
{
	cout << "\nNhap vao tu so: ";
	cin >> TuSo;

	do{
		cout << "\nNhap vao mau so: ";
		cin >> MauSo;

		if(MauSo == 0)
		{
			cout << "\nMau so khong hop le. Xin kiem tra lai !";
		}
	}while(MauSo == 0);
}

void PhanSo::XuatPhanSo()
{
	cout << TuSo << "/" << MauSo;
}

PhanSo PhanSo::TinhTong(PhanSo x)
{
	PhanSo Tong;
	Tong.TuSo = TuSo * x.MauSo + MauSo * x.TuSo;
	Tong.MauSo = MauSo * x.MauSo;

	return Tong;
}

//PhanSo PhanSo::TinhHieu()
//{
//
//}
//
//PhanSo PhanSo::TinhTich()
//{
//
//}
//
//PhanSo PhanSo::TinhThuong()
//{
//
//}
//
void PhanSo::RutGonPhanSo()
{
	int UCLN = TimUCLN(TuSo, MauSo);

	TuSo /= UCLN;
	MauSo /= UCLN;
}

int TimUCLN(int a, int b)
{
	if(a < 0)
	{
		a *= -1;
	}

	if(b < 0)
	{
		b *= -1;
	}

	while(a != b)
	{
		if(a > b)
		{
			a -= b;
		}
		else
		{
			b -= a;
		}
	}
	return a; // Hay b cung duoc vi luc nay a = b
}

PhanSo::PhanSo(void)
{
	TuSo = 0;
	MauSo = 1;
}


PhanSo::~PhanSo(void)
{
}
