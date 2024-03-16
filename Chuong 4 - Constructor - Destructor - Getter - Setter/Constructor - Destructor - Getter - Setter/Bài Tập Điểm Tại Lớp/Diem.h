#pragma once
#include <iostream>
using namespace std;

class Diem
{
private:
	int x, y;
public:
	Diem(void); // Hàm khởi tạo mặc định
	Diem(int, int); // Hàm khởi tạo tham số
	Diem(const Diem &); // Hàm khởi tạo sao chép
	~Diem(void); // Hàm hủy
	void Nhap();
	void Xuat();

	int Getter_X();
	int Getter_Y();
	void Setter_X(int);
	void Setter_Y(int);

	float TinhKhoangCach(Diem);
};

