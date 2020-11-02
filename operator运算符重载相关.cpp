#include<iostream>
using namespace std;

class Class0
{
	private:
		int m1;
		int m2;

	public:
		Class0(int _m1 = 0, int _m2 = 0);
		Class0 operator+(Class0 &obj); //双目运算符‘+’重载，使用成员函数的方式
		//friend Class0 operator+(Class0 &obj1, Class0 &obj2); //双目运算符‘+’重载，使用友元函数的方式

		Class0 operator++(); //单目运算符‘++’（前置）重载
		Class0 operator++(int); //单目运算符‘++’（后置）重载

		friend istream & operator>>(istream &input, Class0 &obj); //流提取符‘>>’重载 //以“istream &”类型返回是为了可以连续输入
		friend ostream & operator<<(ostream &output, Class0 &obj); //流插入符‘<<’重载 //以“ostream &”类型返回是为了可以连续输出

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
运算符重载函数作为类成员函数和作为友元函数的区别（以双目运算符为例）：
作为成员函数可以少一个参数，*this默认作为第一个参数，
故运算符的第一个参数一定要是对象，如‘+’号左边一定要是对象。
作为友元函数参数不能少， 至少需要一个参数为对象，但参数的顺序不做不做规定。
*/

/*
成员函数还是友元函数？参考如下：
1. “=、[]、()、->”必须作为成员函数重载
2. “<<、>>”必须作为友元函数重载
3. 单目运算符一般作为成员函数重载
4. 双目运算符一般作为友元函数重载
*/
