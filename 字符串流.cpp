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

	/*输出字符串流*/
//	ostrstream strout(str1, 100);
//	strout << x << ends;

	/*输入字符串流*/
//	istrstream strin(str1, 100);
//	strin >> y;

	/*输入输出字符串流*/
//	strstream strio(str1, 100);
//	strio << x << ends;
//	strio >> y;

	/*stringstream用于字符串与其他数据类型的转化（单向）*/
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
strstream与stringstream的区别：
strstream用于字符数组
stringstream用于string对象 
strstream利用现有缓冲区
stringstream利用自行分配的缓冲区 
*/
