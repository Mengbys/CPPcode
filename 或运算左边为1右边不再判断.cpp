#include <iostream>
using namespace std;

int main()
{
	int a=1,b=2,m=0,n=0;
	int k;
	k=(n=b>a)or(m=a<b); //����(n=b>a)��1�����ټ���(m=a<b) 
	cout<<k<<m<<n; //101 

	return 0;
}
/*
������||ʱֻҪ���Ϊ�棬��ô�Ͳ������ж��ұߵ������ˣ�����ͳ�����.
�ұ�û�в����жϣ�����m��ֵû�б仯��
*/ 


