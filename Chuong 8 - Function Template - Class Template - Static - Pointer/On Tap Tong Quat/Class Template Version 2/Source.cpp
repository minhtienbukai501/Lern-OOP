#include "MyVector.cpp"

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