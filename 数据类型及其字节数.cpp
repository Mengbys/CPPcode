#include <iostream>
using namespace std;

int main()
{
	/*��ϵͳλ���޹ص�*/
	cout << "int: " << sizeof(int) << endl; //4 
	cout << "char: " << sizeof(char) << endl; //1 
	cout << "float: " << sizeof(float) << endl; //4 
	cout << "double: " << sizeof(double) << endl; //8 
	cout << "short int: " << sizeof(short) << endl; //2 
	cout << "long long int: " << sizeof(long long) <<endl; //8 
	cout << "bool: " << sizeof(bool) << endl; //1 
	cout << endl; 
	
	/*��ϵͳλ���йص�*/ 
	cout << "long int: " << sizeof(long) << endl; //����������йأ�4��8 
	cout << "long double: " << sizeof(long double) << endl; //32λϵͳ12��64λϵͳ16 
	cout << "pointer: " << sizeof(int*) << endl; //����ϵͳλ����4��8 
	return 0;
 } 
