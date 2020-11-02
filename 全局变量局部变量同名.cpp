#include <iostream>
using namespace std;

int c=0;

void fun()
{
	int c=1;
	cout<<c<<endl;
}

int main()
{
	fun();
	cout<<c<<endl;
	return 0;
}

/*
全局变量，局部变量同名，局部用的是局部变量。 
*/
 
