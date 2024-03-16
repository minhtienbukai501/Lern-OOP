#include "PhanSo.h"

// Cú pháp: <Kiểu dữ liệu> <Tên lớp>::<Tên phương thức>
void PhanSo::NhapPhanSo()
{
	cout << "\nNhap vao tu so: ";
	cin >> TuSo;

	//do{
		Sondeptrai:
		cout << "\nNhap vao mau so: ";
		cin >> MauSo;

		if(MauSo == 0)
		{
			cout << "\nMau so phai khac 0. Xin kiem tra lai !";
			goto Sondeptrai;
		}
	//}while(MauSo == 0);
}

void PhanSo::XuatPhanSo()
{
	cout << TuSo << "/" << MauSo;
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
	if(a == 0 && b != 0)
	{
		return b;
	}
	if(b == 0 && a != 0)
	{
		return a;
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
	return a; // Hay b cung dc
}

void PhanSo::RutGonPhanSo()
{
	int ucln = TimUCLN(TuSo, MauSo);

	TuSo /= ucln;
	MauSo /= ucln;
}

PhanSo PhanSo::TinhTong(PhanSo b)
{
	PhanSo Tong;
	Tong.TuSo = TuSo * b.MauSo + MauSo * b.TuSo;
	Tong.MauSo = MauSo * b.MauSo;

	return Tong;
}

PhanSo PhanSo::TinhHieu(PhanSo b)
{
	PhanSo Hieu;
	Hieu.TuSo = TuSo * b.MauSo - MauSo * b.TuSo;
	Hieu.MauSo = MauSo * b.MauSo;

	return Hieu;
}

PhanSo PhanSo::TinhTich(PhanSo b)
{
	PhanSo Tich;
	Tich.TuSo = this ->TuSo * b.TuSo;
	Tich.MauSo = this ->MauSo * b.MauSo;

	return Tich;
}

PhanSo PhanSo::TinhThuong(PhanSo b)
{
	PhanSo b_nghichdao;
	b_nghichdao.TuSo = b.MauSo;
	b_nghichdao.MauSo = b.TuSo;

	return (*this).TinhTich(b_nghichdao);
}

bool PhanSo::KiemTraLonHon(PhanSo b)
{
	// Cách 1:
	/*if((float)TuSo / MauSo > (float)b.TuSo / b.MauSo)
	{
		return true;
	}
	return false;*/

	// Cách 2:
	//return (float)TuSo / MauSo > (float)b.TuSo / b.MauSo ? true : false;

	// Cách 3:
	return (float)TuSo / MauSo > (float)b.TuSo / b.MauSo;
}

PhanSo::PhanSo(void)
{
}


PhanSo::~PhanSo(void)
{
}
