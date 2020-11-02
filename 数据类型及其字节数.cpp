#include <iostream>
using namespace std;

int main()
{
	/*与系统位数无关的*/
	cout << "int: " << sizeof(int) << endl; //4 
	cout << "char: " << sizeof(char) << endl; //1 
	cout << "float: " << sizeof(float) << endl; //4 
	cout << "double: " << sizeof(double) << endl; //8 
	cout << "short int: " << sizeof(short) << endl; //2 
	cout << "long long int: " << sizeof(long long) <<endl; //8 
	cout << "bool: " << sizeof(bool) << endl; //1 
	cout << endl; 
	
	/*与系统位数有关的*/ 
	cout << "long int: " << sizeof(long) << endl; //还与编译器有关，4或8 
	cout << "long double: " << sizeof(long double) << endl; //32位系统12，64位系统16 
	cout << "pointer: " << sizeof(int*) << endl; //等于系统位数，4或8 
	return 0;
 } 
