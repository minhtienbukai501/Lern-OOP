#pragma once
#include <iostream>
using namespace std;

class CThoiGian
{
private:
	int Gio, Phut, Giay;
public:
	friend istream& operator >>(istream &, CThoiGian &); // Khai báo toán tử nhập.
	friend ostream& operator <<(ostream &, CThoiGian); // Khai báo toán tử xuất.
	bool operator >(CThoiGian);
	bool operator <(CThoiGian);
	bool operator >=(CThoiGian);
	bool operator <=(CThoiGian);
	bool operator ==(CThoiGian);
	bool operator !=(CThoiGian);
	CThoiGian operator +(CThoiGian);
	CThoiGian operator -(CThoiGian);

	CThoiGian operator ++(); // Tiền tố
	CThoiGian operator ++(int); // Hậu tố

	CThoiGian operator --(); // Tiền tố
	CThoiGian operator --(int); // Hậu tố

	CThoiGian(void); // Khởi tạo mặc định
	CThoiGian(int, int, int); // Khởi tạo nhận tham số.
	~CThoiGian(void);
};

