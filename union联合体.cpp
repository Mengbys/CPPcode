#include <iostream>
using namespace std;

union A
{
	int a;
	char b;
};

int main()
{
	A x;
	cout<<sizeof(x)<<endl;
	cout<<&x<<endl<<&x.a<<endl;
	x.a=97;
	cout<<x.b<<endl;
		
	return 0;
}

/*
������Ĵ�Сȡ��ռ�ֽ��������ݡ�
�������еĳ�Ա������һ�ε�ַ�ռ䡣 
*/
