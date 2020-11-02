#include <iostream>
using namespace std;

int main()
{
	int *p[3];
	int a[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	p[0] = a[0];
	p[1] = a[1];
	p[2] = a[2];
	cout << a[2][2];

	return 0;
}

/*
int *p[3]; 是指针数组，有3个指针，每个指针的类型都是整型
int (*P)[3]; 是指向一维数组的指针变量
*/
