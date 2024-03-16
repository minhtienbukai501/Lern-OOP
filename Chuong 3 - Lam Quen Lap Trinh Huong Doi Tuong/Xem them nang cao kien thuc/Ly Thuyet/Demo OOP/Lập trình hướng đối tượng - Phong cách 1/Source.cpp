#include <iostream>
#include <string>
using namespace std;

class HocSinh
{
private:
	string Ten;
	float DiemVan, DiemToan;
public:
	void NhapThongTin()
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

	void XuatThongTin()
	{
		cout << "\nTen: " << Ten;
		cout << "\nDiem toan: " << DiemToan;
		cout << "\nDiem van: " << DiemVan;
	}

	float TinhDiemTrungBinh()
	{
		return (DiemToan + DiemVan) / 2;
	}
};

int main()
{
	HocSinh hs;

	// NhapThongTin(hs) --> lập trình hướng thủ tục.
	hs.NhapThongTin();
	hs.XuatThongTin();

	float Dtb = hs.TinhDiemTrungBinh();
	cout << "\nDiem trung binh = " << Dtb;

	system("pause");
	return 0;
}