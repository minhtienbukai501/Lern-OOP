#include "PhanSo.h"


PhanSo::PhanSo(void)
{
	Tu = 0;
	Mau = 1;
}


PhanSo::~PhanSo(void)
{
}

PhanSo::PhanSo(int ts, int ms)
{
	Tu = ts;
	Mau = ms;
}

PhanSo::PhanSo(const PhanSo &ps)
{
	Tu = ps.Tu;
	Mau = ps.Mau;
}

istream& operator >>(istream &is, PhanSo &ps)
{
	cout << "\nNhap vao tu so: ";
	is >> ps.Tu;

	do{
		cout << "\nNhap vao mau so: ";
		is >> ps.Mau;

		if(ps.Mau == 0)
		{
			cout << "\nMau so khong hop le. Xin kiem tra lai !";
		}
	}while(ps.Mau == 0);

	return is;
}

ostream& operator <<(ostream &os, PhanSo ps)
{
	os << ps.Tu << "/" << ps.Mau;
	return os;
}

PhanSo& PhanSo::operator=(const PhanSo &ps)
{
	Tu = ps.Tu;
	Mau = ps.Mau;

	return *this;
}

// PhanSo +, -, *, / PhanSo
// a + b
PhanSo PhanSo::operator+(PhanSo ps)
{
	PhanSo Tong;
	Tong.Tu = this->Tu * ps.Mau + Mau * ps.Tu;
	Tong.Mau = Mau * ps.Mau;

	return Tong;
}

PhanSo PhanSo::operator-(PhanSo ps)
{
	PhanSo Hieu;
	Hieu.Tu = Tu * ps.Mau - Mau * ps.Tu;
	Hieu.Mau = Mau * ps.Mau;

	return Hieu;
}

PhanSo PhanSo::operator*(PhanSo ps)
{
	PhanSo Tich;
	Tich.Tu = Tu * ps.Tu;
	Tich.Mau = Mau * ps.Mau;

	return Tich;
}

PhanSo PhanSo::operator/(PhanSo ps)
{
	PhanSo NghichDao(ps.Mau, ps.Tu);
	return *this * NghichDao;
}

// PhanSo +,-,*,/ int
PhanSo PhanSo::operator+(int x)
{
	PhanSo a(x, 1);
	return *this + a;
}

PhanSo PhanSo::operator-(int x)
{
	PhanSo a(x, 1);
	return *this - a;
}

PhanSo PhanSo::operator*(int x)
{
	PhanSo a(x, 1);
	return *this * a;
}

PhanSo PhanSo::operator/(int x)
{
	PhanSo a(x, 1);
	return *this / a;
}

// int +,-,*,/ PhanSo
PhanSo operator+(int x, PhanSo ps)
{
	return ps + x;
}

PhanSo operator-(int x, PhanSo ps)
{
	// x - a <=> -(a - x) <=> (a - x) * -1
	return (ps - x) * -1;
}

PhanSo operator*(int x, PhanSo ps)
{
	return ps * x;
}

PhanSo operator/(int x, PhanSo ps)
{
	PhanSo a(x, 1);
	return a / ps;
}

// a > b 
bool PhanSo::operator>(PhanSo ps)
{
	// cach 1: thiếu nhi
	/*if((float)Tu / Mau > (float)ps.Tu / ps.Mau)
	{
		return true;
	}
	return false;*/

	// cách 2: dậy thì
	//return (float)Tu / Mau > (float)ps.Tu / ps.Mau ? true : false;

	// cách 3: vào đời
	return (float)Tu / Mau > (float)ps.Tu / ps.Mau;
}

bool PhanSo::operator<(PhanSo ps)
{
	// cach 1: thiếu nhi
	/*if((float)Tu / Mau < (float)ps.Tu / ps.Mau)
	{
		return true;
	}
	return false;*/

	// cách 2: dậy thì
	//return (float)Tu / Mau < (float)ps.Tu / ps.Mau ? true : false;

	// cách 3: vào đời
	return (float)Tu / Mau < (float)ps.Tu / ps.Mau;
}

bool PhanSo::operator>=(PhanSo ps)
{
	// cach 1: thiếu nhi
	/*if((float)Tu / Mau >= (float)ps.Tu / ps.Mau)
	{
		return true;
	}
	return false;*/

	// cách 2: dậy thì
	//return (float)Tu / Mau >= (float)ps.Tu / ps.Mau ? true : false;

	// cách 3: vào đời
	return (float)Tu / Mau >= (float)ps.Tu / ps.Mau;
}

bool PhanSo::operator<=(PhanSo ps)
{
	// cach 1: thiếu nhi
	/*if((float)Tu / Mau <= (float)ps.Tu / ps.Mau)
	{
		return true;
	}
	return false;*/

	// cách 2: dậy thì
	//return (float)Tu / Mau <= (float)ps.Tu / ps.Mau ? true : false;

	// cách 3: vào đời
	return (float)Tu / Mau <= (float)ps.Tu / ps.Mau;
}

bool PhanSo::operator==(PhanSo ps)
{
	// cach 1: thiếu nhi
	/*if((float)Tu / Mau == (float)ps.Tu / ps.Mau)
	{
		return true;
	}
	return false;*/

	// cách 2: dậy thì
	//return (float)Tu / Mau == (float)ps.Tu / ps.Mau ? true : false;

	// cách 3: vào đời
	return (float)Tu / Mau == (float)ps.Tu / ps.Mau;
}

bool PhanSo::operator!=(PhanSo ps)
{
	// cach 1: thiếu nhi
	/*if((float)Tu / Mau != (float)ps.Tu / ps.Mau)
	{
		return true;
	}
	return false;*/

	// cách 2: dậy thì
	//return (float)Tu / Mau != (float)ps.Tu / ps.Mau ? true : false;

	// cách 3: vào đời
	return (float)Tu / Mau != (float)ps.Tu / ps.Mau;
}

PhanSo& PhanSo::operator+=(const PhanSo &ps)
{
	*this = *this + ps;
	return *this;
}

PhanSo& PhanSo::operator-=(const PhanSo &ps)
{
	*this = *this - ps;
	return *this;
}

PhanSo& PhanSo::operator*=(const PhanSo &ps)
{
	*this = *this * ps;
	return *this;
}

PhanSo& PhanSo::operator/=(const PhanSo &ps)
{
	*this = *this / ps;
	return *this;
}

PhanSo& operator +=(int &x, PhanSo ps)
{
	x += (ps.Tu / ps.Mau);
	PhanSo Tong = x + ps;
	return Tong;
}

// tiền tố
PhanSo& PhanSo::operator++()
{
	// tăng trước trả sau
	
	*this = *this + 1; // tăng trước
	return *this; // trả sau
}

// hậu tố: int => để chơi không làm gì
PhanSo PhanSo::operator++(int x)
{
	// trả trước tăng sau
	
	// tạo biến phụ lưu lại giá trị lúc trước khi tăng
	PhanSo Temp = *this;

	*this = *this + 1;

	return Temp;
}

// a.cong(b);