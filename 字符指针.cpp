#include<iostream>
using namespace std;

int main()
{
	char c = 'a';
	char *p = &c;

	char cc[3] = {'a', 'b', 'c'};

	cout << &c << endl;
	cout << p << endl;
	cout << cc << endl;

	return 0;
}

//�ַ�ָ�룬������p������&c��cc������ǵ�ַ����������ַ��� 
//�ַ�ָ�����ַ�����������ͬ�� 
//eg: 
//char str[] = "yulin";
//char *ptr = str;
//str��ptr����ǵ�ַ����ʱ���ߴ�ĵ�ַ��ͬ
//��ptr��ĵ�ַ���Ա䣬str��ĵ�ַ���ܱ�
//��˿��ԣ�
//ptr = "nanning"
//�����ܣ�
//str = "nanning" 
