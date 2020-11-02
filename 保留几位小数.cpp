#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	float x = 3.1415926;
	
	/*方法一：用流对象的成员函数*/ 
	cout.precision(3); 
	cout<<x<<endl; //3.14 
	
	/*方法二：用控制符（iomanip)*/
	cout<<setprecision(3)<<x<<endl;  //3.14
	
	return 0;
}
