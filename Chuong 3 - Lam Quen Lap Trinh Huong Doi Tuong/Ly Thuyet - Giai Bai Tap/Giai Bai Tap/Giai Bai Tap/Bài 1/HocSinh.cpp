#include "HocSinh.h"

bool KiemTraLaSoThuc(string chuoi)
{
	// Kiểm tra xem chuỗi có phải là số thực ?
	int length = chuoi.length();
	
	int dem = 0;
	for(int i = 0; i < length; i++)
	{
		if((chuoi[i] < '0' || chuoi[i] > '9') && chuoi[i] != '.')
		{
			return false;
		}
		if(chuoi[i] == '.')
		{
			dem++;
			if(dem == 2)
			{
				return false;
			}
		}
	}
	return true;
}

// <Kiểu dữ liệu> <Tên lớp>::<Tên phương thức>
void HocSinh::Nhap()
{
	fflush(stdin); // Xóa bộ nhớ đệm nè.
	cout << "\nNhap vao ten: ";
	getline(cin, Ten);

	/*do{
		cout << "\nNhap vao diem toan: ";
		cin >> DiemToan;

		if(DiemToan < 0 || DiemToan > 10)
		{
			cout << "\nDiem toan khong hop le. Xin kiem tra lai !";
		}
	}while(DiemToan < 0 || DiemToan > 10);*/

	string toan;
sondeptrai:
	fflush(stdin);
	cout << "\nNhap vao diem toan: ";
	getline(cin, toan);

	// Kiểm tra xem chuỗi có phải là số thực ?
	bool Check = KiemTraLaSoThuc(toan);
	if(Check == false)
	{
		cout << "\nKieu du lieu khong hop le. Xin kiem tra lai !";
		goto sondeptrai;
	}
	else
	{
		DiemToan = atof((char *)toan.c_str());
		if(DiemToan < 0 || DiemToan > 10)
		{
			cout << "\nDiem toan khong hop le. Xin kiem tra lai !";
			goto sondeptrai;
		}
	}


	do{
		cout << "\nNhap vao diem van: ";
		cin >> DiemVan;

		if(DiemVan < 0 || DiemVan > 10)
		{
			cout << "\nDiem van khong hop le. Xin kiem tra lai !";
		}
	}while(DiemVan < 0 || DiemVan > 10);
}

void HocSinh::Xuat()
{
	cout << "\nTen: " << Ten;
	cout << "\nDiem toan: " << DiemToan;
	cout << "\nDiem van: " << DiemVan;
	cout << "\nDiem trung binh = " << TinhDiemTrungBinh();
}

float HocSinh::TinhDiemTrungBinh()
{
	return (DiemToan + DiemVan) / 2;
}