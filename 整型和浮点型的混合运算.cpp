#include <iostream>
using namespace std;

int main()
{
	float x;
	int a = 2;
	int b = 3;
	float fa = 2;
	float fb = 3;

	x =  3 / 2;
	cout << x << endl; //1 //分子分母都是整型，按照整型运算，运算结果为整型 

	x =  3.0 / 2; //3.0是浮点型，2是整型 
	cout << x << endl; //1.5 //分子分母有一个是浮点型，按照浮点型运算，结果为浮点型 

	x =  3 / 2.0;
	cout << x << endl; //1.5 //分子分母有一个是浮点型，按照浮点型运算，结果为浮点型 

	x = 3 / a;
	cout << x << endl; //1

	x = 3.0 / a;
	cout << x << endl; //1.5

	x = b / a;
	cout << x << endl; //1

	x = fb / fa;
	cout << x << endl; //1.5


	return 0;
}
