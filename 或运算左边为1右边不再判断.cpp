#include <iostream>
using namespace std;

int main()
{
	int a=1,b=2,m=0,n=0;
	int k;
	k=(n=b>a)or(m=a<b); //计算(n=b>a)得1，不再计算(m=a<b) 
	cout<<k<<m<<n; //101 

	return 0;
}
/*
条件有||时只要左边为真，那么就不会再判断右边的条件了，结果就出来了.
右边没有参与判断，所以m的值没有变化。
*/ 


