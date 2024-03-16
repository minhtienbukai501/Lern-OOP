#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	/* 
	nhập vào 1 số n và ghi nó ra tập tin
	*/

	// Mở tập tin để ghi
	//ofstream FileOut("OUTPUT.txt", ios_base::app);

	//// Nếu tập tin chưa có sẽ tạo mới, nếu có rồi sẽ xóa hết cái cũ để ghi cái mới vào.

	//int x;
	//cout << "\nNhap vao x = ";
	//cin >> x;

	//// ghi x vào tập tin
	//FileOut << "\n" << x;

	//// đóng tập tin lại
	//FileOut.close();

	// đọc danh sách tên các mặt hàng trong cửa hàng vào chương trình
	ifstream FileIn("INPUT.txt", ios_base::in);

	// KIỂM TRA FILE TỒN TẠI
	if(!FileIn)
	{
		cout << "\nKhong tim thay tap tin INPUT.txt";
		system("pause");
		return 0; // kết thúc
	}

	vector<string> mathang;

	while (!FileIn.eof())
	//while(FileIn != NULL)
	{
		string str;
		getline(FileIn, str);
		mathang.push_back(str);
	}

	int size = mathang.size();

	for(int i = 0; i < size; i++)
	{
		cout << "\nMat hang thu " << i + 1 << " la: " << mathang[i];
	}

	// ĐÓNG FILE LẠI
	FileIn.close();

	system("pause");
	return 0;
}