#include "PhanSo.h"

// khởi tạo mặc định
PhanSo::PhanSo(void)
{
	Tu = 0;
	Mau = 1;
}

// khởi tạo tham số
PhanSo::PhanSo(int ts, int ms)
{
	Tu = ts;
	Mau = ms;
}

// khởi tạo sao chép
PhanSo::PhanSo(const PhanSo &ps)
{
	Tu = ps.Tu;
	Mau = ps.Mau;
}

// hủy
PhanSo::~PhanSo(void)
{
}

void PhanSo::Nhap()
{
	cout << "\nNhap vao tu so: ";
	cin >> Tu;

	do{
		cout << "\nNhap vao mau so: ";
		cin >> Mau;

		if(Mau == 0)
		{
			cout << "\nMau so khong hop le. Xin kiem tra lai !";
		}
	}while(Mau == 0);
}

void PhanSo::Xuat()
{
	cout << Tu << "/" << Mau;
}

PhanSo PhanSo::TinhTong(PhanSo ps)
{
	PhanSo Tong(Tu * ps.Mau + Mau * ps.Tu, Mau * ps.Mau);
	//Tong.Tu = Tu * ps.Mau + Mau * ps.Tu;
	//Tong.Mau = Mau * ps.Mau;

	return Tong;
}

// a + b
PhanSo PhanSo::operator+(PhanSo ps)
{
	PhanSo Tong(Tu * ps.Mau + Mau * ps.Tu, Mau * ps.Mau);
	//Tong.Tu = Tu * ps.Mau + Mau * ps.Tu;
	//Tong.Mau = Mau * ps.Mau;

	return Tong;
}

// a + 5 <=> a + b(5, 1)
PhanSo PhanSo::operator+(int n)
{
	// cách 1:
	PhanSo b(n, 1);
	return *this + b;

	// cách 2:
	/*PhanSo Tong;
	Tong.Tu = Tu + Mau * n;
	Tong.Mau = Mau;
	return Tong;*/
}

int PhanSo::Getter_Mau()
{
	return Mau;
}

int PhanSo::Getter_Tu()
{
	return Tu;
}

void PhanSo::Setter_Tu(int ts)
{
	Tu = ts;
}

void PhanSo::Setter_Mau(int ms)
{
	Mau = ms;
}

PhanSo operator +(int n, PhanSo ps)
{
	// PhanSo + int
	//return ps + n;

	PhanSo Tong;
	//Tong.Setter_Tu(ps.Getter_Tu() + ps.Getter_Mau() * n);
	//Tong.Setter_Mau(ps.Getter_Mau());
	Tong.Tu = ps.Tu + ps.Mau * n;
	Tong.Mau = ps.Mau;

	return Tong;

}

istream& operator >>(istream &is, PhanSo &ps)
{
	is >> ps.Tu >> ps.Mau;
	return is;
}

ostream& operator <<(ostream &os, PhanSo ps)
{
	os << ps.Tu << "/" << ps.Mau;
	return os;
}

PhanSo& PhanSo::operator=(const PhanSo &ps)
{
	this->Tu = ps.Tu;
	this->Mau = ps.Mau;
	/*this->a = new int;
	*a = *ps.a;*/
	return *this;
}

PhanSo& PhanSo::operator+=(const PhanSo &ps)
{
	*this = *this + ps;
	return *this;
}

void HoTro()
{
	cout << "\nHo Tro";
}