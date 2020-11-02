#include<iostream>
#include<fstream>
using namespace std;

struct A
{
	int a;
	char b;
	float c;
};

int main()
{
	A x = {10, 'x', 1.2};
	A y;

	/*使用write函数来写*/
	ofstream outfile("d.dat", ios::binary);
	outfile.write((char *)&x, sizeof(x));

	/*使用read函数来读*/ 
	ifstream infile("e.dat", ios::binary);
	infile.read((char *)&y, sizeof(y));
	cout << y.a << endl;
	
	return 0;
}
