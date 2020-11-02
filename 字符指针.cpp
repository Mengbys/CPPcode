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

//字符指针，不论是p，还是&c、cc，存的是地址，输出的是字符串 
//字符指针与字符数组名的异同： 
//eg: 
//char str[] = "yulin";
//char *ptr = str;
//str、ptr存的是地址，此时两者存的地址相同
//但ptr存的地址可以变，str存的地址不能变
//因此可以：
//ptr = "nanning"
//而不能：
//str = "nanning" 
