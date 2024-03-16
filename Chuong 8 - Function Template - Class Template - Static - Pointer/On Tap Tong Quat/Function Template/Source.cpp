#include <iostream>
#include <string>
using namespace std;

template <class Sondeptrai>
void HoanVi(Sondeptrai &a, Sondeptrai &b)
{
	Sondeptrai Temp = a;
	a = b;
	b = Temp;
}

int main()
{
	//string a = "Son";
	//string b = "dep trai";

	//int a = 1;
	//int b = 2;

	float a = 1.5;
	float b = 6.9;

	HoanVi<float>(a, b);

	cout << "\na = " << a;
	cout << "\nb = " <<  b;

	

	system("pause");
	return 0;
}