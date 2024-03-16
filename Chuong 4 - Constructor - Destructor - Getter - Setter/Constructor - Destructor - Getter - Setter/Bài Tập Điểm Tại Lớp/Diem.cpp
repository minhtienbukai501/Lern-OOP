#include "Diem.h"

// Hàm khởi tạo mặc định
Diem::Diem(void)
{
	x = y = 0;
}

// Hàm hủy
Diem::~Diem(void)
{
	// RỖNG DO KHÔNG CÓ CON TRỎ
}

// Hàm khởi tạo tham số
Diem::Diem(int a, int b)
{
	x = a;
	y = b;
}

// Hàm khởi tạo sao chép
Diem::Diem(const Diem &a)
{
	x = a.x;
	y = a.y;
}

void Diem::Nhap()
{
	cout << "\nNhap hoanh do: ";
	cin >> x;

	cout << "\nNhap tung do: ";
	cin >> y;
}

void Diem::Xuat()
{
	cout << "(" << x << "," << y << ")";
}

int Diem::Getter_X()
{
	return x;
}

int Diem::Getter_Y()
{
	return y;
}

void Diem::Setter_X(int hd)
{
	x = hd;
}

void Diem::Setter_Y(int td)
{
	y = td;
}

float Diem::TinhKhoangCach(Diem d)
{
	return sqrt(pow(x - d.x, 2) + pow(y - d.y, 2));
}




