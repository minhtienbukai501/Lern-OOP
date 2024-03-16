#include "PhanSo.h"

int main()
{
	PhanSo ps1, ps2;
	
	cout << "\nNhap ps1: ";
	cin >> ps1;
	cout << ps1;

	cout << "\nNhap ps2: ";
	cin >> ps2;
	cout << ps2;

	cout << "\nps1 + ps2 = " << ps1 + ps2;
	cout << "\nps1 - ps2 = " << ps1 - ps2;
	cout << "\nps1 * ps2 = " << ps1 * ps2;
	cout << "\nps1 / ps2 = " << ps1 / ps2;

	cout << "\nps1 + 2 = " << ps1 + 2;
	cout << "\n2 + ps1 = " << 2 + ps1;

	cout << "\nps1 - 2 = " << ps1 - 2;
	cout << "\n2 - ps1 = " << 2 - ps1;

	cout << "\nps1 * 2 = " << ps1 * 2;
	cout << "\n2 * ps1 = " << 2 * ps1;

	cout << "\nps1 / 2 = " << ps1 / 2;
	cout << "\n2 / ps1 = " << 2 / ps1;

	if(ps1 > ps2)
	{
		cout << "\nps1 > ps2";
	}
	else if(ps1 < ps2)
	{
		cout << "\nps1 < ps2";
	}
	else
	{
		cout << "\nps1 == ps2";
	}

	//ps1 += ps2;
	//cout << "\nps1 sau khi += la: " << ps1;

	/* 
int a;
int b = 5;
a = ++b; // a = 6 & b = 6
//a = b++; // a = 5 & b = 6
	*/ 

	PhanSo x = ++ps1;
	cout << "\nps1 = " << ps1;
	cout << "\nx = " << x;


	system("pause");
	return 0;
}