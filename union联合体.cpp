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
联合体的大小取决占字节最大的数据。
联合体中的成员共用这一段地址空间。 
*/
