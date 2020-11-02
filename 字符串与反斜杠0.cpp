#include <iostream>
using namespace std;

int main()
{
	string x = "abcdefasdasdasdasg";
	cout << sizeof(string) << endl;
	cout << x.size() << endl;
	return 0;
}


//'\0'是字符串的结束标志，系统会默认地添加在字符串的末尾
//如果是string，程序员添加不了（系统包装了）
//如果想用char数组来表示字符串，有以下几个等价方法：
//1. char str[] = "i am happy"    系统自动在最后加'\0'
//2. char str[] = {'i', ' ', 'a', 'm', ' ', 'h', 'a', 'p', 'p', 'y', '\0'}    人为加'\0'
//3. char str[11] = {'i', ' ', 'a', 'm', ' ', 'h', 'a', 'p', 'p', 'y'}    数组长度比实际长度大1，系统自动将最后一个元素赋值为'\0'

//char c[100] = "China";
//或char c[100] = {'C', 'h', 'i', 'n', 'a'}
//将'a'以后的数组元素都赋值为'\0'了
