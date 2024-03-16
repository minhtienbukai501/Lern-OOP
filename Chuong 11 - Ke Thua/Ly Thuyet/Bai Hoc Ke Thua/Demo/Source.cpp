#include <iostream>
using namespace std;

class chame
{
protected:
	void Xuat()
	{
		cout << "\nTai san cua cha me";
	}
};

class con : public chame
{
public:
	void Xuat()
	{
		chame::Xuat(); // Xuat của chame
		cout << "\nDay la lop con";
	}
};

