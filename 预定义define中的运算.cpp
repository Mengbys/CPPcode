#include <iostream>
using namespace std;

#define ABC(x) x*x

int main()
{
	int a = 3;
	int b;
	b = ABC(a + 1);
	cout << b; //7

	return 0;
}

/*
计算机进行原样替换
a+1*a+1=7
*/

