#pragma once
#include <iostream>
using namespace std;

class PhanSo
{
private:
	int Tu, Mau;
public:
	PhanSo(void); // hàm dựng mặc định
	~PhanSo(void); // hàm hủy
	PhanSo(int, int); // Hàm dựng tham số
	PhanSo(const PhanSo &); // Hàm dựng sao chép
	
	PhanSo& operator =(const PhanSo &);

	// PhanSo +-*/ PhanSo
	PhanSo operator +(PhanSo);
	PhanSo operator -(PhanSo);
	PhanSo operator *(PhanSo);
	PhanSo operator /(PhanSo);

	// PhanSo +-*/ int
	PhanSo operator +(int);
	PhanSo operator -(int);
	PhanSo operator *(int);
	PhanSo operator /(int);

	// int +-*/ PhanSo
	friend PhanSo operator +(int, PhanSo);
	friend PhanSo operator -(int, PhanSo);
	friend PhanSo operator *(int, PhanSo);
	friend PhanSo operator /(int, PhanSo);

	// PhanSo >, <, >=, <=, ==, != PhanSo
	bool operator >(PhanSo);
	bool operator >=(PhanSo);
	bool operator <(PhanSo);
	bool operator <=(PhanSo);
	bool operator ==(PhanSo);
	bool operator !=(PhanSo);

	// thiếu trường hợp so sánh giữa int & PhanSo, giữa PhanSo & int

	// PhanSo +=, -=, *=, /= PhanSo
	PhanSo& operator +=(const PhanSo &);
	PhanSo& operator -=(const PhanSo &);
	PhanSo& operator *=(const PhanSo &);
	PhanSo& operator /=(const PhanSo &);

	// làm tiếp +=, -=, *=, /= giữa PhanSo & int, giữa int & PhanSo

	friend PhanSo& operator +=(int &, PhanSo);
	friend istream& operator >>(istream &, PhanSo &);
	friend ostream& operator <<(ostream &, PhanSo);

	// ++, -- (cẩn thận tiền tố/hậu tố)
	
	// tiền tố
	PhanSo& operator++();

	// hậu tố
	PhanSo operator ++(int); // int là tham số giả lập
};