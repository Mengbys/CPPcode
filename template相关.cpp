#include<iostream>
using namespace std;

template <typename T> //����ģ�壬��ͬ��������ʹ��ͬһ������ 
T func0(T a, T b)
{
	return a + b;
}

template <typename T1, typename T2> //����ģ������ö�������� 
void func1(T1 a, T2 b)
{
	a += 1;
	b += 1;
}

template <typename T> //��ģ�� 
class Class0
{
	private:
		T m1;
		T m2; 
	public:
		void func3();
};

template <typename T> //��ģ�壬�����ⶨ���Ա����ʱ��д�� 
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

	Class0<int> obj0; //��ģ�壬��������д�� 

	return 0;
}
