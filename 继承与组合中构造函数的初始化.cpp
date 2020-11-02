#include<iostream>
using namespace std;

class Classx
{
	private:
		int m1, m2;
	public:
		Classx(int _m1, int _m2)
		{
			m1 = _m1;
			m2 = _m2;
		}
};

class Class0
{
	private:
		int a;
	public:
		Class0(int _a)
		{
			a = _a;
		}
};

class Class1: public Class0
{
	private:
		int b;
	public:
		Class1(int _a, int _b): Class0(_a)
		{
			b = _b;
		}
};

class Class2: public Class1
{
	private:
		int c;
	public:
		Class2(int _a, int _b, int _c): Class1(_a, _b)
		{
			c = _c;
		}
};

class Class3: public Class2
{
	private:
		int d;
		Classx objx;
	public:
		Class3(int _a, int _b, int _c, int _m1, int _m2, int _d): Class2(_a, _b, _c), objx(_m1, _m2)
		{
			d = _d;
		}

};

int main()
{

	return 0;
}
