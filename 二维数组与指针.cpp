#include <iostream>
using namespace std;

int main()
{
	int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	int (*p)[3]; //p为指向整型数组（大小为3）的指针
	p = a;
	cout << p[2][2] << endl; //等价于*(*(p+2)+2)

	return 0;
}

/*
int **p是二级指针，是指向指针的指针，不能直接指向二维数组。 
*/
