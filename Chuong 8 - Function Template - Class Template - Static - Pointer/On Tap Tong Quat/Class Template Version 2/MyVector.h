#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;

template <class Sondeptrai>
class MyVector
{
private:
	Sondeptrai a[30];
	int n; // Số lượng phần tử
public:
	MyVector(void);
	~MyVector(void);

	void push_back(Sondeptrai value);

	Sondeptrai pop_back();

	int Size();

	Sondeptrai operator [](int index);
};

