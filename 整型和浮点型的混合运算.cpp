#include <iostream>
using namespace std;

int main()
{
	float x;
	int a = 2;
	int b = 3;
	float fa = 2;
	float fb = 3;

	x =  3 / 2;
	cout << x << endl; //1 //���ӷ�ĸ�������ͣ������������㣬������Ϊ���� 

	x =  3.0 / 2; //3.0�Ǹ����ͣ�2������ 
	cout << x << endl; //1.5 //���ӷ�ĸ��һ���Ǹ����ͣ����ո��������㣬���Ϊ������ 

	x =  3 / 2.0;
	cout << x << endl; //1.5 //���ӷ�ĸ��һ���Ǹ����ͣ����ո��������㣬���Ϊ������ 

	x = 3 / a;
	cout << x << endl; //1

	x = 3.0 / a;
	cout << x << endl; //1.5

	x = b / a;
	cout << x << endl; //1

	x = fb / fa;
	cout << x << endl; //1.5


	return 0;
}
