#include <iostream>
using namespace std;

int main()
{
	const int b = 10; //��������ֻ��

	int a = 8;
	const int *p1 = &a; //ָ������ָ�룬��ָ���ݲ���ͨ���ı�*p1���ı�
	int *const p2 = &a; //��ָ�룬ָ��ָ���ܱ�

	return 0;
}

/*
����֮�⣬����ĵط����У������󡢳����ݳ�Ա������Ա����
�������������ݳ�Ա���ֻ������ֻ�ܵ��ó���Ա������eg��
ClassExemple const obj(1, 2, 3);

����Ա���������ݳ�Ա���ֻ����ͬ��������

����Ա�������������޸��κ����ݳ�Ա��ֻ����������
void func(int a, int b) const;
*/
