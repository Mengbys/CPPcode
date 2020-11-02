#include<iostream>
using namespace std;

class A
{
	private:
		int a;
	public:
		A(int _a)
		{
			a = _a; 
		}
		virtual void display()
		{
			cout << a << endl;
		}
};

class B: public A
{
	private:
		int b;
	public:
		B(int _a, int _b): A(_a)
		{
			b = _b;
		}
		void display()
		{
			cout << b << endl;
		}
};

class C: public B
{
	private:
		int c;
	public:
		C(int _a, int _b, int _c): B(_a, _b)
		{
			c = _c;
		}
		void display()
		{
			cout << c << endl;
		}
};


int main()
{
	A obja(1);
	B objb(1, 2);
	C objc(1, 2, 3);
	
	obja.display(); //静态关联 
	objb.display(); //静态关联 
	objc.display(); //静态关联 
	
	A *ptr;
	ptr=&objb;
	ptr->display(); //动态关联 
	
	ptr=&objc;
	ptr->display(); //动态关联 
	
	/* 无virtual时 
	A *ptr;
	ptr=&objb;
	ptr->display(); //输出1 
	
	ptr=&objc;
	ptr->display(); //输出1
	
	这是因为：ptr是基类指针，它所指向的是objb、objc中的基类部分 
	*/ 


	return 0;
}

/*
虚函数的作用：可以通过基类指针或引用来访问基类和派生类中的同名函数。这些同名函数是对虚函数的再定义。 
*/ 

