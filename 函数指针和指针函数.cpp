#include<iostream>
using namespace std;

int k = 10;

int func_1(int a, int b)
{
	cout << "nishishabi" << endl;
}

int *func_2(int a, int b) //ָ�뺯��
{
	int *c = &k;
	cout << "woshishabi" << endl;
	return c;
}

int main()
{
	int (*p)(int a, int b); //����ָ��
	p = func_1; //ָ��ָ����func_1 //��p = &func_1�ȼۣ� 
	p(1, 2); //ͨ��ָ����ú��� 

	int (CLASS1::*ptr)(int a, int b); //����ָ��
	ptr = &CLASS1::pub_func_1; //ָ��ָ��ĳ����ĳ�Ա����
	CLASS1 obj1;
	(obj.*ptr)(1, 2); //ͨ��ָ����ú��� 

	int *d = func_2(1, 2);  

	return 0;
}
