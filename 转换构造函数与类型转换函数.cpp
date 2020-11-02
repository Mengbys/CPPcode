#include<iostream>
using namespace std;

class Class0
{
	private:
		int m1;
		int m2;

	public:
		Class0(); //默认构造函数
		Class0(int _m1, int _m2); //初始化构造函数
		Class0(int x); //转换构造函数
		operator int(); //类型转换函数
		//friend Class0 operator+(Class0 &obj1, Class0 &obj2);
		void display();
};

Class0::Class0()
{
	m1 = 0;
	m2 = 0;
}

Class0::Class0(int _m1, int _m2)
{
	m1 = _m1;
	m2 = _m2;
}

Class0::Class0(int x)
{
	m1 = x;
	m2 = 0;
}

Class0::operator int()
{
	return m1;
}

void Class0::display()
{
	cout << m1 << ends << m2 << endl;
}

//Class0 operator+(Class0 &obj1, Class0 &obj2)
//{
//	return Class0(obj1.m1 + obj2.m1, obj1.m2 + obj2.m2);
//}

int main()
{
	Class0 obj1(1, 2);
	Class0 obj2;
	obj2 = Class0(3); //转换构造函数用法：将标准类型数据或另一个类的对象转换为这个类的对象 
	obj2.display();

	int a = 1;
	int b;
	b =  a + obj1; //类型转换函数用法：将类的对象转换为标准类型数据 //在这里不能与‘+’的重载同时用，会产生二义性，其他情况同理 
	cout << b << endl;

	return 0;
}
