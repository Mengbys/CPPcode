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
int *p[3]; ��ָ�����飬��3��ָ�룬ÿ��ָ������Ͷ�������
int (*P)[3]; ��ָ��һά�����ָ�����
*/
