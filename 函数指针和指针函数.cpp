#include<iostream>
using namespace std;

int k = 10;

int func_1(int a, int b)
{
	cout << "nishishabi" << endl;
}

int *func_2(int a, int b) //指针函数
{
	int *c = &k;
	cout << "woshishabi" << endl;
	return c;
}

int main()
{
	int (*p)(int a, int b); //函数指针
	p = func_1; //指针指向函数func_1 //与p = &func_1等价？ 
	p(1, 2); //通过指针调用函数 

	int (CLASS1::*ptr)(int a, int b); //函数指针
	ptr = &CLASS1::pub_func_1; //指针指向某个类的成员函数
	CLASS1 obj1;
	(obj.*ptr)(1, 2); //通过指针调用函数 

	int *d = func_2(1, 2);  

	return 0;
}
