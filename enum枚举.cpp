#include <iostream>
using namespace std;

enum barrel {a = 9, b = 11, c = 80, d = 25, e = 66, f = 10, g = 22, h, i, j};

int main()
{
	barrel ball0 = a;
	barrel ball1 = b;
	barrel ball2 = j;

	cout << ball0 << endl << ball1 << endl << ball2;

	return 0;
}

//名字代替数值来用的一种方法
