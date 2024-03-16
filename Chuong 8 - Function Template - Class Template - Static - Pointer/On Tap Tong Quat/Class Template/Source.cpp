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
	
	MyVector()
	{
		n = 0; // Khởi tạo
	}

	void push_back(Sondeptrai value)
	{
		a[n] = value;
		n++;
	}

	Sondeptrai pop_back()
	{
		n--;
		return a[n];
	}

	int Size()
	{
		return n;
	}

	Sondeptrai operator [](int index)
	{
		return a[index];
	}
};

int main()
{
	/*vector<int> list;
	vector<float> list_2;
	vector<string> list_3;*/

	MyVector<string> a;

	a.push_back("Son");
	a.push_back("dep");
	a.push_back("trai");

	cout << "\npop = " << a.pop_back();

	cout << "\nsize = " << a.Size();
	
	for(int i = 0; i < a.Size(); i++)
	{
		cout << "\n" << a[i];
	}

	system("pause");
	return 0;
}