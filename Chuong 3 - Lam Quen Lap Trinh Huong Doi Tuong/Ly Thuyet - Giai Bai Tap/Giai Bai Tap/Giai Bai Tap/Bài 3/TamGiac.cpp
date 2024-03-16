#include "TamGiac.h"


void TamGiac::Nhap()
{
	bool Check;
	do{
		Check = true; // Khởi tạo.
		cout << "\nNhap diem A: ";
		A.Nhap();

		cout << "\nNhap diem B: ";
		B.Nhap();

		cout << "\nNhap diem C: ";
		C.Nhap();

		Check = KiemTraTamGiacHopLe();

		if(Check == false)
		{
			cout << "\n3 diem khong tao thanh tam giac. Xin kiem tra lai !";
		}
	}while(Check == false);
}

void TamGiac::Xuat()
{
	cout << "\nA";
	A.Xuat();

	cout << "\nB";
	B.Xuat();

	cout << "\nC";
	C.Xuat();
}

bool TamGiac::KiemTraTamGiacHopLe()
{
	float AB = A.TinhKhoangCach(B);
	float AC = A.TinhKhoangCach(C);
	float BC = B.TinhKhoangCach(C);

	if(AB + AC <= BC || AB + BC <= AC || BC + AC <= AB)
	{
		return false;
	}
	return true;
}

float TamGiac::TinhChuVi()
{
	float AB = A.TinhKhoangCach(B);
	float AC = A.TinhKhoangCach(C);
	float BC = B.TinhKhoangCach(C);

	return AB + AC + BC;
}

float TamGiac::TinhDienTich()
{
	float AB = A.TinhKhoangCach(B);
	float AC = A.TinhKhoangCach(C);
	float BC = B.TinhKhoangCach(C);

	float NuaChuVi = TinhChuVi() / 2;

	return sqrt(NuaChuVi * (NuaChuVi - AB) * (NuaChuVi - AC) * (NuaChuVi - BC));
}