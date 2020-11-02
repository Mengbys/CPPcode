#include<iostream>
using namespace std;

template <typename T> //函数模板，不同类型数据使用同一个函数 
T func0(T a, T b)
{
	return a + b;
}

template <typename T1, typename T2> //函数模板可以用多个类型名 
void func1(T1 a, T2 b)
{
	a += 1;
	b += 1;
}

template <typename T> //类模板 
class Class0
{
	private:
		T m1;
		T m2; 
	public:
		void func3();
};

template <typename T> //类模板，在类外定义成员函数时的写法 
void Class0<T>::func3()
{
	m1 = 0;
	m2 = 0;
}

int main()
{
	int a = 1, b = 2;
	float c = 3;
	func0(a, b);
	func1(a, c);

	Class0<int> obj0; //类模板，定义对象的写法 

	return 0;
}
