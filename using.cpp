#include<iostream>
using namespace std;
int a = 3;
int main()
{
	int a=1;
	cout << a << endl;
	extern a;
	cout << a << endl;

	system("pause");
}