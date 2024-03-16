#include <iostream>
#include <string>
using namespace std;

class HocSinh
{
private:
	string Ten;
	float *Diem;
public:
	void Xuat()
	{
		cout << "\nTen: " << Ten;
		cout << "\nDiem: " << *Diem;
	}

	// Khởi tạo mặc định
	HocSinh()
	{
		Ten = "Son dep trai";
		Diem = new float;
		*Diem = 6.9;
		cout << "ok" << endl;
	}

	// Khởi tạo tham số
	HocSinh(string t, float d)
	{
		Ten = t;
		Diem = new float;
		*Diem = d;
	}

	// Khởi tạo sao chép.
	HocSinh(const HocSinh &x)
	{
		Ten = x.Ten;
		Diem = new float; // tạo 1 vùng nhớ khác
		*Diem = *x.Diem;
	}

	// Hàm Hủy
	~HocSinh()
	{
		// Nếu trong lớp mà không có con trỏ thì hàm hủy khỏi cần cài đặt
		// Nếu trong lớp mà có con trỏ thì bên trong hàm hủy phải giải phóng con trỏ

		cout << "ham huy chay" << endl;
		delete Diem;
	}

	void ThayDoi()
	{
		(*Diem)--;
	}

	void InDiaChi()
	{
		cout << "\nDia chi: " << &Diem;
		cout << "\nMien gia tri: " << Diem;
	}

	string Getter_Ten()
	{
		return Ten;
	}

	void Setter_Ten(string t)
	{
		Ten = t;
	}


};

int main()
{
	HocSinh hs1("Thao", 7);
	HocSinh hs2(hs1);

	hs1.ThayDoi();

	cout << "\nthong tin hs1\n";
	hs1.Xuat();

	cout << "\nthong tin hs2\n";
	hs2.Xuat();

	/*cout << "\nhs1: ";
	hs1.InDiaChi();

	cout << "\nhs2: ";
	hs2.InDiaChi();*/

	hs1.Setter_Ten("Doanh");
	cout << "\nTen hoc sinh hs1 la: " << hs1.Getter_Ten();

	/* 
Để y: Khi hs1 gọi tới phương thức ThayDoi làm giảm đi
1 điểm của hs1 thì tự nhiên hs2 cũng bị giảm đi 1 điểm

bởi vì nếu như ta không khai báo hàm dựng sao chép
thì trình biên dịch sẽ ngầm làm như sau:

HocSinh(const HocSinh &x)
{
	Ten = x.Ten;
	Diem = x.Diem;
}

	*/
	
	system("pause");
	return 0;
}