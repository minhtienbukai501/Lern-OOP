#include <iostream>
using namespace std;

class Animal
{
public:
	// Hàm ẢO
	/*virtual void TiengKeu()
	{
		cout << "\nTran Nguyen Bao";
	}*/

	// Hàm thuần ảo là hàm mà chỉ khai báo chứ không có định nghĩa, việc định nghĩa sẽ do các lớp con đảm nhiệm.
	virtual void TiengKeu() = 0;

	virtual ~Animal(){}
};

class Cat : public Animal
{
public:
	void TiengKeu()
	{
		cout << "\nMeo Meo Meo";
	}
};

class Dog : public Animal
{
public:
	/*void TiengKeu()
	{
		cout << "\nGau Gau Gau";
	}*/
};

int main()
{
	Animal *convat;

	Cat meo;
	Dog cho;

	// cách 1:
	//convat = &meo;

	// cách 2:
	convat = new Cat;

	convat->TiengKeu();

	delete convat;

	system("pause");
	return 0;
}