#include <iostream>
#include <string>
#include <vector>
using namespace std;

// lớp cha
class NhanVien
{
protected:
	string HoTen, NgaySinh, DiaChi;
public:
	void Nhap()
	{
		fflush(stdin); // xóa bộ nhớ đệm
		cout << "\nNhap vao ten: ";
		getline(cin, HoTen);

		fflush(stdin); // xóa bộ nhớ đệm
		cout << "\nNhap vao ngay sinh: ";
		getline(cin, NgaySinh);

		fflush(stdin); // xóa bộ nhớ đệm
		cout << "\nNhap vao dia chi: ";
		getline(cin, DiaChi);
	}

	void Xuat()
	{
		cout << "\nHo ten: " << HoTen;
		cout << "\nNgay sinh: " << NgaySinh;
		cout << "\nDia chi: " << DiaChi;
	}
};

// kế thừa dạng public
class NhanVienSanXuat : public NhanVien
{
private:
	int SoSanPham;
public:
	void Nhap()
	{
		NhanVien::Nhap(); // Gọi lại Nhap của cha.
		cout << "\nNhap vao so san pham: ";
		cin >> SoSanPham;
	}

	void Xuat()
	{
		NhanVien::Xuat(); // Gọi lại Xuat của cha
		cout << "\nSo san pham = " << SoSanPham;
		cout << "\nLuong nhan duoc la: " << (size_t)TinhLuong();
	}

	double TinhLuong()
	{
		return SoSanPham * 50000;
	}
};

// kế thừa dạng public
class NhanVienCongNhat : public NhanVien
{
private:
	int SoNgayCong;
public:
	void Nhap()
	{
		NhanVien::Nhap(); // Gọi lại Nhap của cha.
		cout << "\nNhap vao so ngay cong: ";
		cin >> SoNgayCong;
	}

	void Xuat()
	{
		NhanVien::Xuat(); // Gọi lại Xuat của cha
		cout << "\nSo ngay cong = " << SoNgayCong;
		cout << "\nLuong nhan duoc la: " << (size_t)TinhLuong();
	}

	double TinhLuong()
	{
		return SoNgayCong * 120000;
	}
};

// kế thừa dạng public
class NhanVienQuanLy : public NhanVien
{
private:
	double HeSoLuong, LuongCanBan;
public:
	void Nhap()
	{
		NhanVien::Nhap(); // Gọi lại Nhap của cha.
		cout << "\nNhap vao he so luong: ";
		cin >> HeSoLuong;

		cout << "\nNhap vao luong can ban: ";
		cin >> LuongCanBan;
	}

	void Xuat()
	{
		NhanVien::Xuat(); // Gọi lại Xuat của cha
		cout << "\nHe so luong: " << HeSoLuong;
		cout << "\nLuong can ban: " << (size_t)LuongCanBan;
		cout << "\nLuong nhan duoc la: " << (size_t)TinhLuong();
	}

	double TinhLuong()
	{
		return HeSoLuong * LuongCanBan;
	}
};

class CongTy
{
private:
	vector<NhanVienCongNhat> ListCongNhat;
	vector<NhanVienQuanLy> ListQuanLy;
	vector<NhanVienSanXuat> ListSanXuat;
public:
	void Nhap()
	{
		int luachon;
		do{
			cout << "\n----------------- MENU -----------------\n";
			cout << "\n1. Nhan vien cong nhat";
			cout << "\n2. Nhan vien san xuat";
			cout << "\n3. Nhan vien quan ly";
			cout << "\n0. Thoat";
			cout << "\n----------------------------------------\n";

			
			cout << "\nNhap vao lua chon cua ban: ";
			cin >> luachon;

			if(luachon == 1)
			{
				NhanVienCongNhat x;
				x.Nhap();
				ListCongNhat.push_back(x);
			}
			else if(luachon == 2)
			{
				NhanVienSanXuat x;
				x.Nhap();
				ListSanXuat.push_back(x);
			}
			else if(luachon == 3)
			{
				NhanVienQuanLy x;
				x.Nhap();
				ListQuanLy.push_back(x);
			}
		}while(luachon != 0);

	}

	void Xuat()
	{
		cout << "\nDanh sach nhan vien cong nhat\n";
		int soluong = ListCongNhat.size();
		for(int i = 0; i < soluong; i++)
		{
			cout << "\nThong Tin Nhan Vien Thu " << i + 1 << "\n";
			ListCongNhat[i].Xuat();
		}

		cout << "\nDanh sach nhan vien san xuat\n";
		 soluong = ListSanXuat.size();
		for(int i = 0; i < soluong; i++)
		{
			cout << "\nThong Tin Nhan Vien Thu " << i + 1 << "\n";
			ListSanXuat[i].Xuat();
		}

		cout << "\nDanh sach nhan vien quan ly\n";
		 soluong = ListQuanLy.size();
		for(int i = 0; i < soluong; i++)
		{
			cout << "\nThong Tin Nhan Vien Thu " << i + 1 << "\n";
			ListQuanLy[i].Xuat();
		}
	}

	double TinhTongLuong()
	{
		double Tong = 0;

		// Tính tổng lương của tất cả nhân viên công nhật.
		int soluong = ListCongNhat.size();
		for(int i = 0; i < soluong; i++)
		{
			Tong += ListCongNhat[i].TinhLuong();
		}

		// Tính tổng lương của tất cả nhân viên sản xuất.
		 soluong = ListSanXuat.size();
		for(int i = 0; i < soluong; i++)
		{
			Tong += ListSanXuat[i].TinhLuong();
		}

		// Tính tổng lương của tất cả nhân viên quản lý.
		 soluong = ListQuanLy.size();
		for(int i = 0; i < soluong; i++)
		{
			Tong += ListQuanLy[i].TinhLuong();
		}
		return Tong;
	}
};

int main()
{
	CongTy x;
	x.Nhap();
	x.Xuat();
	cout << "\nTong luong = " << (size_t)x.TinhTongLuong();

	system("pause");
	return 0;
}