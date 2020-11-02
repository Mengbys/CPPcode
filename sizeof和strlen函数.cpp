#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char *str1 = "hello";
	char str2[] = "hello";
	cout << "char" << endl;
	cout << sizeof(str1) << endl; //数据类型字节数8（64位系统） 
	cout << sizeof(str2) << endl; //数组大小
	cout << strlen(str1) << endl; //字符串长度无'\0'
	cout << strlen(str2) << endl; //字符串长度无'\0'

	cout << "string" << endl;
	string str3 = "hello";
	cout << sizeof(str3) << endl; //数据类型字节数8 （64位系统） 
	cout << str3.length() << endl; //字符串长度 
	cout << str3.size() << endl; //字符串长度 

	return 0;
}
