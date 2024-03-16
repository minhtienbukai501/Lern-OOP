#include "ThoiGian.h"

int main()
{
	CThoiGian tg1, tg2;
	cout << "\nNhap thoi gian 1: ";
	cin >> tg1;
	cout << tg1;
	/*
	cout << "\nNhap thoi gian 2: ";
	cin >> tg2;
	cout << tg2;
	
	cout << "\ntg1 + tg2 = ";
	cout << tg1 + tg2;

	cout << "\ntg1 - tg2 = ";
	cout << tg1 - tg2;*/

	CThoiGian a = ++tg1;
	
	cout << "\na = " << a;
	cout << "\ntg1 = " << tg1;

	a = tg1++;
	
	cout << "\na = " << a;
	cout << "\ntg1 = " << tg1;

	system("pause");
	return 0;
}