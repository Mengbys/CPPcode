#include<iostream>
using namespace std;

class Class0
{
	private:
		int m1;
		int m2;

	public:
		Class0(); //Ĭ�Ϲ��캯��
		Class0(int _m1, int _m2); //��ʼ�����캯��
		Class0(int x); //ת�����캯��
		operator int(); //����ת������
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
	obj2 = Class0(3); //ת�����캯���÷�������׼�������ݻ���һ����Ķ���ת��Ϊ�����Ķ��� 
	obj2.display();

	int a = 1;
	int b;
	b =  a + obj1; //����ת�������÷�������Ķ���ת��Ϊ��׼�������� //�����ﲻ���롮+��������ͬʱ�ã�����������ԣ��������ͬ�� 
	cout << b << endl;

	return 0;
}
