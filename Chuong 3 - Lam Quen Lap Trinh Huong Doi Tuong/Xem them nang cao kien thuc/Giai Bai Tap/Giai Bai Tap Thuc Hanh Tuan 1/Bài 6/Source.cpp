#include "SinhVien.h"
#include <vector>

void NhapDanhSachLop(SinhVien *arr, int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << "\n\n\t\t* Nhap Thong Tin Sinh Vien Thu " << i + 1 << " *\n";
		arr[i].NhapSinhVien();
	}
}

void XuatDanhSachLop(SinhVien *arr, int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << "\n\n\t\t* Nhap Thong Tin Sinh Vien Thu " << i + 1 << " *\n";
		arr[i].XuatSinhVien();
	}
}

float TimDiemThiCaoNhat(SinhVien *arr, int n)
{
	float DiemMax = arr[0].LayDiemThi();

	for(int i = 1; i < n; i++)
	{
		if(arr[i].LayDiemThi() > DiemMax)
		{
			DiemMax = arr[i].LayDiemThi();
		}
	}
	return DiemMax;
}

template <class T>
void HoanVi(T &a, T &b)
{
	T Temp = a;
	a = b;
	b = Temp;
}

void SapTangDanTheoTen(vector<SinhVien> &arr)
{
	int n = arr.size();

	for(int i = 0; i < n - 1; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			if(arr[i].LayHoTen() > arr[j].LayHoTen())
			{
				HoanVi<SinhVien>(arr[i], arr[j]);
			}
		}
	}
}

int main()
{
	int n; // Số lượng sinh viên có trong lớp.

	do{
		cout << "\nNhap vao so luong sinh vien trong lop: ";
		cin >> n;

		if(n < 0)
		{
			cout << "\nSo luong khong hop le. Xin kiem tra lai !";
		}
	}while(n < 0);

	// Cấp phát động.
	SinhVien *arr = new SinhVien[n];

	NhapDanhSachLop(arr, n);
	XuatDanhSachLop(arr, n);

	vector<SinhVien> mang;
	
	// Đưa tất cả các sinh viên có điểm cao nhất vào vector.
	float DiemMax = TimDiemThiCaoNhat(arr, n);

	for(int i = 0; i < n; i++)
	{
		if(arr[i].LayDiemThi() == DiemMax)
		{
			mang.push_back(arr[i]);
		}
	}

	if(mang.size() == 1)
	{
		mang[0].XuatSinhVien();
	}
	else
	{
		SapTangDanTheoTen(mang);

		// Xuất ra.
		for(int i = 0; i < mang.size(); i++)
		{
			mang[i].XuatSinhVien();
		}
	}

	// Giải phóng.
	delete[] arr;

	system("pause");
	return 0;
}