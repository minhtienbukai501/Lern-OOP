#include "CongTy.h"


void CongTy::Nhap()
{
	int luachon;
	NhanVien *nv; // con trỏ lớp NhanVien

	do{
		printf("\n-------------- Menu --------------");
		printf("\n1. Nhan vien cong nhat");
		printf("\n2. Nhan vien san xuat");
		printf("\n3. Nhan vien quan ly");
		printf("\n0. Thoat");
		printf("\n----------------------------------");

		do{
			cout << "\nNhap vao lua chon cua ban: ";
			cin >> luachon;

			if(luachon < 0 || luachon > 3)
			{
				printf("\nLua chon khong hop le. Xin nhap lai !");
			}
		}while(luachon < 0 || luachon > 3);


		if(luachon == 1)
		{
			nv = new NhanVienCongNhat;
		}
		else if(luachon == 2)
		{
			nv = new NhanVienSanXuat;
		}
		else if(luachon == 3)
		{
			nv = new NhanVienQuanLy;
		}

		if(luachon != 0)
		{
			bool Check;
			string MaSo;
			do{
				
				fflush(stdin); // Xóa bộ nhớ đệm
				cout << "\nNhap vao ma so: ";
				getline(cin, MaSo);

				int soluong = List.size();
				Check = true; // Khởi tạo lại Check = true
				for(int i = 0; i < soluong; i++)
				{
					if(MaSo == List[i]->Getter_MaSo())
					{
						Check = false;
						break;
					}
				}

				if(Check == false)
				{
					cout << "\nMa so da bi trung. Xin kiem tra lai !";
				}

			}while(Check == false);

			nv->Setter_MaSo(MaSo); // Đưa mã số vào nv.

			nv->Nhap(); // Nhập dữ liệu cho nv.
			List.push_back(nv); // Đưa nv vào trong vector
		}

	}while(luachon != 0);
}

void CongTy::Xuat()
{
	int soluong = List.size();

	for(int i = 0; i < soluong; i++)
	{
		cout << "\nThong Tin Nhan Vien Thu " << i + 1 << " la\n";
		List[i]->Xuat();
	}
}

double CongTy:: TinhTongLuongCongTy()
{
	double Tong = 0;
	int soluong = List.size();

	for(int i = 0; i < soluong; i++)
	{
		Tong += List[i]->TinhLuong();
	}
	return Tong;
}

double CongTy::TimLuongMax()
{
	double Max = List[0]->TinhLuong();

	int soluong = List.size();

	for(int i = 1; i < soluong; i++)
	{
		double Luong = List[i]->TinhLuong();

		if(Luong > Max)
		{
			Max = Luong;
		}
	}
	return Max;
}

void CongTy::LietKeCacNhanVienLuongMax()
{
	double LuongMax = TimLuongMax();

	int soluong = List.size();

	for(int i = 0; i < soluong; i++)
	{
		double Luong = List[i]->TinhLuong();

		if(Luong == LuongMax)
		{
			List[i]->Xuat();
		}
	}
}

double CongTy:: TinhLuongNhanVienCongNhat()
{
	double Tong = 0;
	int soluong = List.size();

	for(int i = 0; i < soluong; i++)
	{
		if(List[i]->Getter_ID() == 1) // Nhân viên công nhật
		{
			Tong += List[i]->TinhLuong();
		}
	}
	return Tong;
}

CongTy::CongTy(void)
{
}


CongTy::~CongTy(void)
{
}
