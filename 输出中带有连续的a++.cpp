#include<iostream>
using namespace std;

int main()
{
	int a = 0;
	cout << (a++) << ends << (a++) << endl;
	cout << a << endl;

	int b = 0;
	printf("%d %d", b++, b++);
	printf("\n%d", b);

	return 0;
}
