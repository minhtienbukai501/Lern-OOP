#include "ThoiGian.h"

// Định nghĩa toán tử nhập.
istream& operator >>(istream &is, CThoiGian &tg)
{
	// 0 <= Giờ <= 23
	do{
		cout << "\nNhap vao gio: ";
		is >> tg.Gio;

		if(tg.Gio < 0 || tg.Gio > 23)
		{
			cout << "\nGio khong hop le. Xin kiem tra lai !";
		}
	}while(tg.Gio < 0 || tg.Gio > 23);

	// 0 <= phút <= 59
	do{
		cout << "\nNhap vao phut: ";
		is >> tg.Phut;

		if(tg.Phut < 0 || tg.Phut > 59)
		{
			cout << "\nPhut khong hop le. Xin kiem tra lai !";
		}
	}while(tg.Phut < 0 || tg.Phut > 59);

	// 0 <= giây <= 59
	do{
		cout << "\nNhap vao giay: ";
		is >> tg.Giay;

		if(tg.Giay < 0 || tg.Giay > 59)
		{
			cout << "\nGiay khong hop le. Xin kiem tra lai !";
		}
	}while(tg.Giay < 0 || tg.Giay > 59);

	return is;
}

// Định nghĩa toán tử xuất.
ostream& operator <<(ostream &os, CThoiGian tg)
{
	os << tg.Gio << ":" << tg.Phut << ":" << tg.Giay;
	return os;
}

// <Kiểu dữ liệu> <Tên lớp>::<Tên phương thức>(Danh sách tham số)
bool CThoiGian::operator>(CThoiGian x)
{
	// Cách 1
	//// Xét giờ
	//if(this ->Gio > x.Gio)
	//{
	//	return true;
	//}
	//else if(this ->Gio == x.Gio)
	//{
	//	// Xét tiếp phút
	//	if(this ->Phut > x.Phut)
	//	{
	//		return true;
	//	}
	//	else if(this ->Phut == x.Phut)
	//	{
	//		// Xét giây
	//		if(this ->Giay > x.Giay)
	//		{
	//			return true;
	//		}
	//	}
	//}
	//return false;

	// Cách 2
	return this ->Gio * 3600 + this ->Phut * 60 + this ->Giay > x.Gio * 3600 + x.Phut * 60 + x.Giay;
}

bool CThoiGian::operator<(CThoiGian x)
{
	return this ->Gio * 3600 + this ->Phut * 60 + this ->Giay < x.Gio * 3600 + x.Phut * 60 + x.Giay;
}

bool CThoiGian::operator>=(CThoiGian x)
{
	return this ->Gio * 3600 + this ->Phut * 60 + this ->Giay >= x.Gio * 3600 + x.Phut * 60 + x.Giay;
}

bool CThoiGian::operator<=(CThoiGian x)
{
	return this ->Gio * 3600 + this ->Phut * 60 + this ->Giay <= x.Gio * 3600 + x.Phut * 60 + x.Giay;
}

bool CThoiGian::operator==(CThoiGian x)
{
	return this ->Gio * 3600 + this ->Phut * 60 + this ->Giay == x.Gio * 3600 + x.Phut * 60 + x.Giay;
}

bool CThoiGian::operator!=(CThoiGian x)
{
	return this ->Gio * 3600 + this ->Phut * 60 + this ->Giay != x.Gio * 3600 + x.Phut * 60 + x.Giay;
}

CThoiGian CThoiGian::operator+(CThoiGian x)
{
	CThoiGian Tong;
	Tong.Giay = this ->Giay + x.Giay;
	Tong.Phut = this ->Phut + x.Phut;
	Tong.Gio = this ->Gio + x.Gio;

	if(Tong.Giay > 59)
	{
		Tong.Giay -= 60;
		Tong.Phut++;
	}

	if(Tong.Phut > 59)
	{
		Tong.Phut -= 60;
		Tong.Gio++;
	}

	if(Tong.Gio > 23)
	{
		Tong.Gio -= 24;
	}
	return Tong;
}

CThoiGian CThoiGian::operator-(CThoiGian x)
{
	CThoiGian Hieu;

	if(*this < x)
	{
		this ->Gio += 24;
	}

	// Xử lý
	Hieu.Giay = this ->Giay - x.Giay;
	if(Hieu.Giay < 0)
	{
		Hieu.Giay += 60;
		this ->Phut--;
	}

	Hieu.Phut = this ->Phut - x.Phut;
	if(Hieu.Phut < 0)
	{
		Hieu.Phut += 60;
		this ->Gio--;
	}

	Hieu.Gio = this ->Gio - x.Gio;

	return Hieu;
}

// a = ++b;

// Tiền tố
CThoiGian CThoiGian::operator ++()
{
	CThoiGian Temp(0, 0, 1); // 0:0:1
	*this = *this + Temp;
	return *this;
}

// Hậu tố
CThoiGian CThoiGian::operator ++(int)
{
	CThoiGian Temp(0, 0, 1); // 0:0:1
	CThoiGian Tong = *this;
	*this = *this + Temp;
	return Tong;
}

// Tiền tố
CThoiGian CThoiGian::operator --()
{
	CThoiGian Temp(0, 0, 1); // 0:0:1
	*this = *this - Temp;
	return *this;
}

// Hậu tố
CThoiGian CThoiGian::operator --(int)
{
	CThoiGian Temp(0, 0, 1); // 0:0:1
	CThoiGian Tong = *this;
	*this = *this - Temp;
	return Tong;
}

CThoiGian::CThoiGian(void)
{
	this ->Gio = 0;
	this ->Phut = 0;
	this ->Giay = 0;
}

CThoiGian::CThoiGian(int gio, int phut, int giay)
{
	this ->Gio = gio;
	this ->Phut = phut;
	this ->Giay = giay;
}


CThoiGian::~CThoiGian(void)
{
}
