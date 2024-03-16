#include "HocSinh.h"

// Cú pháp: <Kiểu dữ liệu> <Tên lớp> :: <Tên phương thức>
void HocSinh::NhapThongTin()
{
	fflush(stdin);
	cout << "\nNhap ten: ";
	getline(cin, Ten);

	do{
		cout << "\nNhap diem toan: ";
		cin >> DiemToan;

		if(DiemToan < 0 || DiemToan > 10)
		{
			cout << "\nDiem toan khong hop le. Xin kiem tra lai !";
		}
	}while(DiemToan < 0 || DiemToan > 10);

	do{
		cout << "\nNhap diem van: ";
		cin >> DiemVan;

		if(DiemVan < 0 || DiemVan > 10)
		{
			cout << "\nDiem van khong hop le. Xin kiem tra lai !";
		}
	}while(DiemVan < 0 || DiemVan > 10);
}

void HocSinh::XuatThongTin()
{
	cout << "\nTen: " << Ten;
	cout << "\nDiem toan: " << DiemToan;
	cout << "\nDiem van: " << DiemVan;
}

float HocSinh::TinhDiemTrungBinh()
{
	return (DiemToan + DiemVan) / 2;
}

HocSinh::HocSinh(void)
{
}


HocSinh::~HocSinh(void)
{
}
