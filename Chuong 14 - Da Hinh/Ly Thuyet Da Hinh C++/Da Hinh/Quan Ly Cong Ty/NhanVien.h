#pragma once
#include <iostream>
#include <string>
using namespace std;

class NhanVien
{
protected:
	string MaSo, HoTen, NgaySinh, DiaChi;
	int id; // id = 1 (công nhật), id = 2 (sản xuất), id = 3 (quản lý)
public:
	virtual void Nhap();
	virtual void Xuat();
	virtual double TinhLuong();
	int Getter_ID();
	void Setter_ID(int);
	string Getter_MaSo();
	void Setter_MaSo(string);
	NhanVien(void);
	virtual ~NhanVien(void);
};

