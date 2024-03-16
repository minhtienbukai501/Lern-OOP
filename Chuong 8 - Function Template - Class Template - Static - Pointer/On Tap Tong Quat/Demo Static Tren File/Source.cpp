#include "LopHoc.h"
#include <vector>
int main()
{
	LopHoc::FileIn.open("INPUT.TXT");
	vector<LopHoc> ListHocSinh;

	while(!LopHoc::FileIn.eof())
	{
		LopHoc lh;
		lh.Nhap();

		ListHocSinh.push_back(lh);
	}

	LopHoc::FileIn.close();

	for(int i = 0; i < ListHocSinh.size(); i++)
	{
		cout << "\nThong tin hoc sinh thu " << i + 1;
		ListHocSinh[i].Xuat();
	}

	system("pause");
	return 0;
}