#include <iostream>
using namespace std;

int main()
{
	int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	int (*p)[3]; //pΪָ���������飨��СΪ3����ָ��
	p = a;
	cout << p[2][2] << endl; //�ȼ���*(*(p+2)+2)

	return 0;
}

/*
int **p�Ƕ���ָ�룬��ָ��ָ���ָ�룬����ֱ��ָ���ά���顣 
*/
