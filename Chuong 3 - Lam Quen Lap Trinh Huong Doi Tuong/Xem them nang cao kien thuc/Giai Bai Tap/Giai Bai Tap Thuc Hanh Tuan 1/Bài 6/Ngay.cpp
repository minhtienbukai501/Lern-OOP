#include "Ngay.h"

// Trả về true nếu là năm nhuận, false nếu không là năm nhuận.
bool KiemTraNamNhuan(int x)
{
	if((x % 4 == 0 && x % 100 != 0) || x % 400 == 0)
	{
		return true;
	}
	return false;

	//return ((x % 4 == 0 && x % 100 != 0) || x % 400 == 0);
}

void Ngay::NhapNgay()
{
	do{
		cout << "\nNhap nam: ";
		cin >> nam;

		if(nam < 1940)
		{
			cout << "\nNam khong hop le. Xin kiem tra lai !";
		}
	}while(nam < 1940);

	do{
		cout << "\nNhap thang: ";
		cin >> thang;

		if(thang < 1 || thang > 12)
		{
			cout << "\nThang khong hop le. Xin kiem tra lai !";
		}
	}while(thang < 1 || thang > 12);

	bool CheckNgay;
	do{
		CheckNgay = true;

		cout << "\nNhap ngay: ";
		cin >> ngay;

		if(ngay < 1)
		{
			CheckNgay = false;
		}
		else
		{
			// Có tối đa 30 ngày.
			if(thang == 4 || thang == 6 || thang == 9 || thang == 11)
			{
				if(ngay > 30)
				{
					CheckNgay = false;
				}
			}
			// Có 31 ngày.
			else if(thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12)
			{
				if(ngay > 31)
				{
					CheckNgay = false;
				}
			}
			// Tháng 2 có thể có 28 hoặc 29 ngày.
			else
			{
				if(KiemTraNamNhuan(nam))
				{
					if(ngay > 29)
					{
						CheckNgay = false;
					}
				}
				else
				{
					if(ngay > 28)
					{
						CheckNgay = false;
					}
				}
			}
		}

		if(CheckNgay == false)
		{
			cout << "\nNgay khong hop le. Xin kiem tra lai !";
		}
	}while(CheckNgay == false);
}

void Ngay::XuatNgay()
{
	cout << "Ngay " << ngay << " thang " << thang << " nam " << nam;
}

Ngay::Ngay(void)
{
}


Ngay::~Ngay(void)
{
}
