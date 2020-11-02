#include<iostream>
using namespace std;

class A
{
	private:
		int m1, m2;
	public:
		int a;
		A(int _m1, int _m2)
		{
			m1 = _m1;
			m2 = _m2;
		}
};

class B1: virtual public A
{
	private:
		int n1;
	public:
		B1(int _m1, int _m2, int _n1): A(_m1, _m2)
		{
			n1 = _n1;
		}
};

class B2: virtual public A
{
	private:
		int n2;
	public:
		B2(int _m1, int _m2, int _n2): A(_m1, _m2)
		{
			n2 = _n2;
		}
};

class B3: virtual public A
{
	private:
		int n3;
	public:
		B3(int _m1, int _m2, int _n3): A(_m1, _m2)
		{
			n3 = _n3;
		}
};

class C: public B1, public B2, public B3
{
	private:
		int n4;
	public:
		C(int _m1, int _m2, int _n1, int _n2, int _n3, int _n4)
			: A(_m1, _m2), B1(_m1, _m2, _n1), B2(_m1, _m2, _n2), B3(_m1, _m2, _n3) //与普通继承的构造函数不同，需要调用虚基类的构造函数，
																				   //基类B1、B2、B3的构造函数并不会调用虚基类A的构造函数
		{
			n4 = _n4;
		}

		void func()
		{
			a = 10; //可行，a是继承自虚基类A的公有成员，可访问
					//C只继承虚基类A一次，即基类A的成员只保留一次
					//故不用B1::a、B2::a或B3::a，，直接调用a就行了
		}
};


int main()
{


	return 0;
}
