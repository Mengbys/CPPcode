#include <iostream>
#include <strstream> //char *
#include <sstream> //string
using namespace std;

int main()
{
	int x = 123456;
	int y;
	char str1[100];
	string str2 = "456";

	/*����ַ�����*/
//	ostrstream strout(str1, 100);
//	strout << x << ends;

	/*�����ַ�����*/
//	istrstream strin(str1, 100);
//	strin >> y;

	/*��������ַ�����*/
//	strstream strio(str1, 100);
//	strio << x << ends;
//	strio >> y;

	/*stringstream�����ַ����������������͵�ת��������*/
	int a = 123;
	int b;
	string s1;
	string s2 = "456";
	stringstream sstream;
	sstream << a;
	sstream >> s1;
	sstream.clear(); 
	sstream << s2;
	sstream >> b; 

	cout << a << endl;
	cout << b << endl;
	cout << s1 << endl;
	cout << s2;

	return 0;
}

/*
strstream��stringstream������
strstream�����ַ�����
stringstream����string���� 
strstream�������л�����
stringstream�������з���Ļ����� 
*/
