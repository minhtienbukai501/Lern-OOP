#include "Diem.h"

void Diem::NhapDiem()
{
	cout << "\nNhap hoanh do: ";
	cin >> HoanhDo;

	cout << "\nNhap tung do: ";
	cin >> TungDo;
}

void Diem::XuatDiem()
{
	cout << "(" << HoanhDo << " , " << TungDo << ")";
}

float Diem::TinhKhoangCach(Diem b)
{
	return sqrt(pow(HoanhDo - b.HoanhDo, 2) + pow(TungDo - b.TungDo, 2));
}

Diem::Diem(void)
{
}


Diem::~Diem(void)
{
}
