#include<iostream>
using namespace std;

class Class0
{
	private:
		int a;

	protected:
		int b;

	public:
		int c;
		void input()
		{
			cin >> a >> b >> c;
		}
		void display()
		{
			cout << a << b << c << endl;
		}
};

class Class1: public Class0 //公有继承，在派生类中，基类保护、公有成员保持原有访问属性，基类私有成员不可访问
{
	public:
		void display1()
		{
//			cout << a; //错误，不可访问基类私有成员，a对派生类不可见
			cout << b; //可行，b是派生类的保护乘员
			cout << c; //可行，c是派生类的公有成员
		}
};

class Class2: private Class0 //私有继承，在派生类中，基类保护、公有成员变成派生类的私有成员，基类私有成员不可访问
{
	public:
		void display2()
		{
//			cout << a; //错误，不可访问基类私有成员，a对派生类不可见
			cout << b; //可行，b是派生类的私有成员
			cout << c; //可行，c是派生类的私有成员
		}
};

class Class3: protected Class0 //保护继承，在派生类中，基类保护、公有成员变成派生类的保护成员，基类私有成员不可访问
{
	public:
		void display3()
		{
//			cout << a; //错误，不可访问基类私有成员，a对派生类不可见
			cout << b; //可行，b是派生类的保护成员
			cout << c; //可行，c是派生类的保护成员
		}
};

int main()
{
	Class1 obj1;
	obj1.input(); //可行，input()是obj1的公有成员
	obj1.display(); //可行，display()是obj1的公有成员
//	obj1.a = 0; //错误，a对obj1不可访问，在类外也不能访问
//	obj1.b = 0; //错误，b是obj1的保护成员，在类外不能访问
	obj1.c = 0; //可行，c是obj的公有成员

	Class2 obj2;
//	obj2.input(); //错误，input()是obj2的私有成员，类外不能访问
//	obj2.display(); //错误，display()是obj2的私有成员，类外不能访问 
//	obj2.a = 0; //错误，a对obj2不可访问，在类外也不能访问
//	obj2.b = 0; //错误，b是obj2的私有成员，在类外不能访问
//	obj2.c = 0; //错误，c是obj2的私有成员，在类外不能访问	 
	
	Class3 obj3;
//	obj3.input(); //错误，input()是obj3的保护成员，类外不能访问
//	obj3.display(); //错误，display()是obj3的保护成员，类外不能访问 
//	obj3.a = 0; //错误，a对obj3不可访问，在类外也不能访问
//	obj3.b = 0; //错误，b是obj3的保护成员，在类外不能访问
//	obj3.c = 0; //错误，c是obj3的保护成员，在类外不能访问

	return 0;
}

/*
私有成员与保护成员：
1. 在同一个类中，这个类的私有成员和保护成员一样——类内成员函数可访问，类外不可访问
2. 在公有继承和保护继承中，在派生类的类中，可以访问其基类的保护成员。但无论采取哪种继承方式，在派生类的类中都无法访问基类的私有成员 
*/ 
