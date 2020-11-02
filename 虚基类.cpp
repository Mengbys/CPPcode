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
			: A(_m1, _m2), B1(_m1, _m2, _n1), B2(_m1, _m2, _n2), B3(_m1, _m2, _n3) //����ͨ�̳еĹ��캯����ͬ����Ҫ���������Ĺ��캯����
																				   //����B1��B2��B3�Ĺ��캯����������������A�Ĺ��캯��
		{
			n4 = _n4;
		}

		void func()
		{
			a = 10; //���У�a�Ǽ̳��������A�Ĺ��г�Ա���ɷ���
					//Cֻ�̳������Aһ�Σ�������A�ĳ�Աֻ����һ��
					//�ʲ���B1::a��B2::a��B3::a����ֱ�ӵ���a������
		}
};


int main()
{


	return 0;
}
