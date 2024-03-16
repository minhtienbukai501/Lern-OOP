#include "HocSinh.h"

int main()
{
	HocSinh hs;

	hs.NhapThongTin();
	hs.XuatThongTin();
	float Dtb = hs.TinhDiemTrungBinh();

	cout << "\nDiem trung binh = " << Dtb;

	system("pause");
	return 0;
}