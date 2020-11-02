#include<iostream>
using namespace std;

struct Man
{
	int e1;
	int e2;
	int e3;
};

int main()
{
	int a[5] = {0};
	cout << a[0] << endl;

	Man man0 = {0};
	cout << man0.e1 << endl;

	Man mans[3] = {0};
	cout << mans[2].e1 << endl;

	int *p[3] = {0};
	cout << p[2] << endl;
	
	
	return 0;
}

//xx={0} xx的所有元素赋值为0
//如果只对数组的一部分进行初始化，则编译器将把其他元素设置为0
