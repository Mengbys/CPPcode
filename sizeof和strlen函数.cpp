#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char *str1 = "hello";
	char str2[] = "hello";
	cout << "char" << endl;
	cout << sizeof(str1) << endl; //���������ֽ���8��64λϵͳ�� 
	cout << sizeof(str2) << endl; //�����С
	cout << strlen(str1) << endl; //�ַ���������'\0'
	cout << strlen(str2) << endl; //�ַ���������'\0'

	cout << "string" << endl;
	string str3 = "hello";
	cout << sizeof(str3) << endl; //���������ֽ���8 ��64λϵͳ�� 
	cout << str3.length() << endl; //�ַ������� 
	cout << str3.size() << endl; //�ַ������� 

	return 0;
}
