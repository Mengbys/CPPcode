#include <iostream>
using namespace std;

int main()
{
	string x = "abcdefasdasdasdasg";
	cout << sizeof(string) << endl;
	cout << x.size() << endl;
	return 0;
}


//'\0'���ַ����Ľ�����־��ϵͳ��Ĭ�ϵ�������ַ�����ĩβ
//�����string������Ա��Ӳ��ˣ�ϵͳ��װ�ˣ�
//�������char��������ʾ�ַ����������¼����ȼ۷�����
//1. char str[] = "i am happy"    ϵͳ�Զ�������'\0'
//2. char str[] = {'i', ' ', 'a', 'm', ' ', 'h', 'a', 'p', 'p', 'y', '\0'}    ��Ϊ��'\0'
//3. char str[11] = {'i', ' ', 'a', 'm', ' ', 'h', 'a', 'p', 'p', 'y'}    ���鳤�ȱ�ʵ�ʳ��ȴ�1��ϵͳ�Զ������һ��Ԫ�ظ�ֵΪ'\0'

//char c[100] = "China";
//��char c[100] = {'C', 'h', 'i', 'n', 'a'}
//��'a'�Ժ������Ԫ�ض���ֵΪ'\0'��
