#include <iostream>
#include <string>
using namespace std;

class Ngay
{
private:
	int ngay, thang, nam;
public:
	void Nhap()
	{
		cout << "\nNhap ngay: ";
		cin >> ngay;

		cout << "\nNhap thang: ";
		cin >> thang;

		cout << "\nNhap nam: ";
		cin >> nam;
	}

	void Xuat()
	{
		cout << "\nNgay " << ngay << " thang " << thang << " nam " << nam;
	}
};

class HocSinh
{
private:
	string Ten;
	float DiemToan, DiemVan;
	Ngay NgaySinh;
public:
	void Nhap()
	{
		fflush(stdin);
		cout << "\nNhap ten: ";
		getline(cin, Ten);

		cout << "\nNhap diem toan: ";
		cin >> this->DiemToan;

		cout << "\nNhap diem van: ";
		cin >> this->DiemVan;

		cout << "\nNhap ngay sinh: ";
		NgaySinh.Nhap();
	}

	void Xuat()
	{
		cout << "\nTen: " << Ten;
		cout << "\nDiem toan: " << DiemToan;
		cout << "\nDiem van: " << DiemVan;
		cout << "\nSinh ngay: ";
		NgaySinh.Xuat();
	} 

	float TinhTrungBinh()
	{
		return (DiemToan + DiemVan) / 2;
	}
};

int main()
{
	HocSinh hs1;
	hs1.Nhap();
	hs1.Xuat();
	float Dtb = hs1.TinhTrungBinh();
	cout << "\nDtb = " << Dtb;

	system("pause");
	return 0;
}