#include "SinhVien.h"

int main()
{
	SinhVien sv1;
	sv1.Nhap();
	sv1.Xuat();
	float Dtb = sv1.TinhDiemTrungBinh();
	cout << "\nDtb = " << Dtb;

	system("pause");
	return 0;
}