#include "MyVector.h"

template <class Sondeptrai>
MyVector<Sondeptrai>::MyVector<Sondeptrai>(void)
{
	n = 0;
}

template <class Sondeptrai>
MyVector<Sondeptrai>::~MyVector<Sondeptrai>(void)
{
}

template <class Sondeptrai>
void MyVector<Sondeptrai>::push_back(Sondeptrai value)
{
	a[n] = value;
	n++;
}

template <class Sondeptrai>
Sondeptrai MyVector<Sondeptrai>::pop_back()
{
	n--;
	return a[n];
}

template <class Sondeptrai>
int MyVector<Sondeptrai>::Size()
{
	return n;
}

template <class Sondeptrai>
Sondeptrai MyVector<Sondeptrai>::operator [](int index)
{
	return a[index];
}
