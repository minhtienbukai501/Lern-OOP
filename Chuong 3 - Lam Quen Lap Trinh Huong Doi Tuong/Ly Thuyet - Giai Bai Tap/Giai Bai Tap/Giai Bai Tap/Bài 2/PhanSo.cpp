#include "PhanSo.h"


void PhanSo::Nhap()
{
	cout << "\nNhap tu so: ";
	cin >> TuSo;

	do{
		cout << "\nNhap mau so: ";
		cin >> MauSo;

		if(MauSo == 0)
		{
			cout << "\nMau so phai khac 0. Xin kiem tra lai !";
		}
	}while(MauSo == 0);
}

void PhanSo::Xuat()
{
	if(MauSo < 0)
	{
		MauSo *= -1;
		TuSo *= -1;
	}
	cout << TuSo << "/" << MauSo;
}

float PhanSo::TinhKetQuaPhanSo()
{
	return (float)TuSo / MauSo;
}

int TimUCLN(int a, int b)
{
	/* 
	3 chia hết cho 1, 3
	6 chia hết cho 1, 2, 3, 6
=> UCLN của 3 & 6 là: 3

	4 chia hết cho 1, 2, 4
	10
=> UCLN của 4 & 10 là: 2
	*/
	
	// quy chuẩn về dương

	if(a < 0)
	{
		a *= -1;
	}

	if(b < 0)
	{
		b *= -1;
	}

	// xử lý
	//int Min = a < b ? a : b;
	//int Max = a > b ? a : b;

	//// 1 số nguyên dương n sẽ không chia hết cho các số nằm trong đoạn n/2 + 1 --> n - 1
	//if(Max % Min == 0)
	//{
	//	return Min;
	//}

	//for(int i = Min / 2; i >= 1; i--)
	//{
	//	if(Min % i == 0 && Max % i == 0)
	//	{
	//		return i;
	//	}
	//}

	/*
	a = 5
	b = 10

	b = b - a = 5

	a = 4
	b = 6

	b = b - a = 2
	a = 4

	a = a - b = 2
	b = 2
	*/

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
	return a; // hay b cũng đc vì lúc này a == b
}

void PhanSo::RutGon()
{
	int ucln = TimUCLN(TuSo, MauSo);
	TuSo /= ucln;
	MauSo /= ucln;
}

// a/b + c/d = (a*d+b*c)/(b*d)
// ps1.TinhTong(ps2);
PhanSo PhanSo::TinhTong(PhanSo ps)
{
	PhanSo Tong;
	Tong.TuSo = this->TuSo * ps.MauSo + ps.TuSo * this->MauSo;
	Tong.MauSo = this->MauSo * ps.MauSo;
	
	return Tong;
}

PhanSo PhanSo::TinhHieu(PhanSo ps)
{
	PhanSo Hieu;
	Hieu.TuSo = this->TuSo * ps.MauSo - ps.TuSo * this->MauSo;
	Hieu.MauSo = this->MauSo * ps.MauSo;
	
	return Hieu;
}

PhanSo PhanSo::TinhTich(PhanSo ps)
{
	PhanSo Tich;
	Tich.TuSo = this->TuSo * ps.TuSo;
	Tich.MauSo = this->MauSo * ps.MauSo;

	return Tich;
}

// ps1/ps2 <=> ps1 * 1/ps2
PhanSo PhanSo::TinhThuong(PhanSo ps)
{
	PhanSo NghichDao;
	NghichDao.TuSo = ps.MauSo;
	NghichDao.MauSo = ps.TuSo;

	return this->TinhTich(NghichDao);
	//return NghichDao.TinhTich(*this);
}