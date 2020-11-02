#include <iostream>
using namespace std;

int main()
{
	int x, y;

//	x = (2, 3, 4, 5, 6, 7);
//	cout << x << endl; //7
//
//	x = 2, 3, 4, 5, 6, 7;
//	cout << x << endl; //2

//	y = (x = 20);
//	cout << y << endl; //20
//
//	y = (x = 4 * 5, x * 5), x + 25;
//	cout << y << endl; //100

//	x = 1, y = 0;
//	y += (++x) + (++x);
//	cout << y << endl; //6

	x = 5;
	y = x++ +x;
	cout << y << endl; //11

	x = 5;
	y = x + (++x);
	cout << y << endl; //12

	x = 5;
	y = (x++) + x;
	cout << y << endl; //11


	return 0;
}
