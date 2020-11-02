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
	
	obja.display(); //��̬���� 
	objb.display(); //��̬���� 
	objc.display(); //��̬���� 
	
	A *ptr;
	ptr=&objb;
	ptr->display(); //��̬���� 
	
	ptr=&objc;
	ptr->display(); //��̬���� 
	
	/* ��virtualʱ 
	A *ptr;
	ptr=&objb;
	ptr->display(); //���1 
	
	ptr=&objc;
	ptr->display(); //���1
	
	������Ϊ��ptr�ǻ���ָ�룬����ָ�����objb��objc�еĻ��ಿ�� 
	*/ 


	return 0;
}

/*
�麯�������ã�����ͨ������ָ������������ʻ�����������е�ͬ����������Щͬ�������Ƕ��麯�����ٶ��塣 
*/ 

