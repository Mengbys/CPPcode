#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	float x = 3.1415926;
	
	/*����һ����������ĳ�Ա����*/ 
	cout.precision(3); 
	cout<<x<<endl; //3.14 
	
	/*���������ÿ��Ʒ���iomanip)*/
	cout<<setprecision(3)<<x<<endl;  //3.14
	
	return 0;
}
