#include "SinhVien.h"

/* cú pháp:
<Kiểu dữ liệu> <Tên lớp>::<Tên phương thức>
*/

void SinhVien::Nhap()
{
	fflush(stdin);
	cout << "\nNhap ten: ";
	getline(cin, Ten);

	cout << "\nNhap diem toan: ";
	cin >> DiemToan;

	cout << "\nNhap diem van: ";
	cin >> DiemVan;

	cout << "\nNgay sinh: ";
	NgaySinh.Nhap();
}

void SinhVien::Xuat()
{
	cout << "\nTen: " << Ten;
	cout << "\nDiem toan: " << DiemToan;
	cout << "\nDiem van: " << DiemVan;
	cout << "\nSinh ngay: ";
	NgaySinh.Xuat();
}

float SinhVien::TinhDiemTrungBinh()
{
	return (DiemToan + DiemVan) / 2;
}

