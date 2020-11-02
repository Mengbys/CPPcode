#include <iostream>
using namespace std;

int main()
{
	const int b = 10; //常变量，只读

	int a = 8;
	const int *p1 = &a; //指向常量的指针，所指内容不能通过改变*p1来改变
	int *const p2 = &a; //常指针，指针指向不能变

	return 0;
}

/*
除此之外，在类的地方还有：常对象、常数据成员、常成员函数
常对象，所有数据成员变成只读，且只能调用常成员函数，eg：
ClassExemple const obj(1, 2, 3);

常成员变量（数据成员变成只读，同常变量）

常成员函数（不允许修改任何数据成员，只读函数）：
void func(int a, int b) const;
*/
