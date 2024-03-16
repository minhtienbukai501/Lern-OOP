#include "NhanVien.h"

// <Kiểu dữ liệu> <Tên lớp>::<Tên phương thức>
void NhanVien::Nhap()
{
	fflush(stdin); // Xóa bộ nhớ đệm
	cout << "\nNhap vao ho ten: ";
	getline(cin, HoTen);

	fflush(stdin); // Xóa bộ nhớ đệm
	cout << "\nNhap vao ngay sinh: ";
	getline(cin, NgaySinh);

	fflush(stdin); // Xóa bộ nhớ đệm
	cout << "\nNhap vao dia chi: ";
	getline(cin, DiaChi);
}

void NhanVien::Xuat()
{
	cout << "\nMa so: " << MaSo;
	cout << "\nHo ten: " << HoTen;
	cout << "\nNgay sinh: " << NgaySinh;
	cout << "\nDia chi: " << DiaChi;
}

double NhanVien::TinhLuong()
{
	return 0; // Mặc định là không có lương.
}

int NhanVien::Getter_ID()
{
	return id;
}

void NhanVien:: Setter_ID(int id_new)
{
	id = id_new;
}

string NhanVien:: Getter_MaSo()
{
	return MaSo;
}

void NhanVien:: Setter_MaSo(string ms)
{
	MaSo = ms;
}

NhanVien::NhanVien(void)
{
}


NhanVien::~NhanVien(void)
{
}
