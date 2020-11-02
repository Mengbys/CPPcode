#include<iostream>
using namespace std;

class Class0
{
	private:
		int m1;
		int m2;

	public:
		Class0(int _m1 = 0, int _m2 = 0);
		Class0 operator+(Class0 &obj); //˫Ŀ�������+�����أ�ʹ�ó�Ա�����ķ�ʽ
		//friend Class0 operator+(Class0 &obj1, Class0 &obj2); //˫Ŀ�������+�����أ�ʹ����Ԫ�����ķ�ʽ

		Class0 operator++(); //��Ŀ�������++����ǰ�ã�����
		Class0 operator++(int); //��Ŀ�������++�������ã�����

		friend istream & operator>>(istream &input, Class0 &obj); //����ȡ����>>������ //�ԡ�istream &�����ͷ�����Ϊ�˿�����������
		friend ostream & operator<<(ostream &output, Class0 &obj); //���������<<������ //�ԡ�ostream &�����ͷ�����Ϊ�˿����������

};

Class0::Class0(int _m1, int _m2): m1(_m1), m2(_m2) {}

Class0 Class0::operator+(Class0 &obj)
{
	return Class0(m1 + obj.m1, m2 + obj.m2);
}

//Class0 operator+(Class0 &obj1, Class0 &obj2)
//{
//	return Class0(obj1.m1 + obj2.m1, obj1.m2 + obj2.m2);
//}

Class0 Class0::operator++()
{
	m1++;
	m2++;
	return *this;
}

Class0 Class0::operator++(int)
{
	Class0 obj_tmp(*this);
	m1++;
	m2++;
	return obj_tmp;
}

istream & operator>>(istream &input, Class0 &obj)
{
	input >> obj.m1 >> obj.m2;
	return input;
}

ostream & operator<<(ostream &output, Class0 &obj)
{
	output << obj.m1 << ends << obj.m2;
	return output;
}

int main()
{
	Class0 obj0;
	cin >> obj0;
	cout << obj0;

	return 0;
}

/*
��������غ�����Ϊ���Ա��������Ϊ��Ԫ������������˫Ŀ�����Ϊ������
��Ϊ��Ա����������һ��������*thisĬ����Ϊ��һ��������
��������ĵ�һ������һ��Ҫ�Ƕ����确+�������һ��Ҫ�Ƕ���
��Ϊ��Ԫ�������������٣� ������Ҫһ������Ϊ���󣬵�������˳���������涨��
*/

/*
��Ա����������Ԫ�������ο����£�
1. ��=��[]��()��->��������Ϊ��Ա��������
2. ��<<��>>��������Ϊ��Ԫ��������
3. ��Ŀ�����һ����Ϊ��Ա��������
4. ˫Ŀ�����һ����Ϊ��Ԫ��������
*/
