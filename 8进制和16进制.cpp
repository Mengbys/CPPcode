#include <iostream>
using namespace std;

int main()
{
	int a=010;
	int b=0x10;
	cout<<a<<ends<<b<<endl; //8 16
	
	int c=123;
	printf("%o %x\n",c,c); //173 7b
	printf("%04x\n",c); //16���Ʊ�ʾ���ܹ�4λ������4λ��0 
	
	int d=123;
	cout<<oct<<d<<ends<<hex<<d<<endl;
	 
	return 0;
}


