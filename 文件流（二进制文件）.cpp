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

	/*ʹ��write������д*/
	ofstream outfile("d.dat", ios::binary);
	outfile.write((char *)&x, sizeof(x));

	/*ʹ��read��������*/ 
	ifstream infile("e.dat", ios::binary);
	infile.read((char *)&y, sizeof(y));
	cout << y.a << endl;
	
	return 0;
}
