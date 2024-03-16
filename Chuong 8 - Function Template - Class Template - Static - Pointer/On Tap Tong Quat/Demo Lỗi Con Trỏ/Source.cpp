#include <iostream>
using namespace std;

class MangSoNguyen
{
private:
	int n; // Số lượng
	int *a; // Mảng động con trỏ
public:
	MangSoNguyen()
	{
		a = NULL;
	}

	~MangSoNguyen()
	{
		delete[] a;
	}

	/*MangSoNguyen(const MangSoNguyen &x)
	{
		this->n = x.n;
		this->a = new int[this->n];

		for(int i = 0; i < this->n; i++)
		{
			this->a[i] = x.a[i];
		}
	}*/

	MangSoNguyen & operator = (const MangSoNguyen &x)
	{
		if(this->a != NULL)
		{
			delete[] this->a; // Delete lỡ trước đó có gì rồi
		}
		
		this->n = x.n;
		this->a = new int[this->n];

		for(int i = 0; i < this->n; i++)
		{
			this->a[i] = x.a[i];
		}
		return *this;
	}

	void Nhap()
	{
		n = 5;
		a = new int[n];
		for(int i = 0; i < n; i++)
		{
			a[i] = i + 1;
		}
	}

	void Xuat()
	{
		for(int i = 0; i < n; i++)
		{
			cout << a[i] << "    ";
		}
	}

	int Getter_index(int idx)
	{
		return a[idx];
	}

	void Setter_index(int idx, int number)
	{
		a[idx] = number;
	}
};

int main()
{
	MangSoNguyen x;

	cout << "\nNhap x\n";
	x.Nhap();

	cout << "\nXuat x\n";
	x.Xuat();

	
	//MangSoNguyen y(x); // Sao chép mặc định có sẵn sẽ sai
	
	MangSoNguyen y;
	y = x; // Toán tử gán bằng mặc định
	
	cout << "\nXuat y\n";
	y.Xuat();

	y.Setter_index(2, 69);
	cout << "\nindex x = " << x.Getter_index(2);

	system("pause");
	return 0;
}