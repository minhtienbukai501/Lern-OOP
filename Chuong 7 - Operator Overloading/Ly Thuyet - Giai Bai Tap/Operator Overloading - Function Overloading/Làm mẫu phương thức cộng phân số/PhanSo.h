#pragma once
#include <iostream>
using namespace std;

class PhanSo
{
private:
	int Tu, Mau;
	//int *a;
public:
	PhanSo(void); // khởi tạo mặc định
	~PhanSo(void); // hủy
	PhanSo(int, int); // tham số
	PhanSo(const PhanSo &); // sao chép
	void Nhap();
	void Xuat();
	PhanSo TinhTong(PhanSo); // a.TinhTong(b)

	// phanso + phanso
	PhanSo operator +(PhanSo);

	// phanso + int
	PhanSo operator +(int);

	int Getter_Tu();
	int Getter_Mau();
	void Setter_Tu(int);
	void Setter_Mau(int);

	// int + PhanSo
	friend PhanSo operator +(int, PhanSo);

	// toán tử nhập
	friend istream& operator >>(istream &, PhanSo &);

	// toán tử xuất
	friend ostream& operator <<(ostream &, PhanSo);

	// toán tử gán bằng
	PhanSo& operator=(const PhanSo &);

	// operator +=
	PhanSo& operator +=(const PhanSo &);

	friend void HoTro();

};

// int + PhanSo
//PhanSo operator +(int, PhanSo);

