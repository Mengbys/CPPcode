#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	char x = 'q';
	char y;
	
	/*��ASCII�ļ�*/
	ofstream outfile;
	outfile.open("c.txt");
//	fstream outfile("a.txt");

	ifstream infile;
	infile.open("c.txt");
//	fstream infile("b.txt");

	fstream iofile;
	iofile.open("c.txt");
//	fstream iofile("c.txt");

	/*д��ASCII�ļ���*/
	iofile << x;
	iofile.close();
	iofile.open("c.txt");  
	
	/*��ASCII�ļ��ж�*/
	iofile >> y;
	cout << y << endl; 

	/*�ر�ASCII�ļ�*/
	outfile.close();
	infile.close();
//	iofile.close();


	return 0;
}

/*
iofile << x;
iofile >> y;
cout << y << endl; 
�����

outfile << x;
infile >> y;
cout << y << endl;
����� 

iofile << x;
iofile.close();
iofile.open("c.txt");
iofile >> y;
cout << y << endl; 
����� 
*/

/*
ofstream����Ĭ��Ϊios::out��ifstream����Ĭ��Ϊios::in��fstream����Ĭ��Ϊios::in|ios::out
strstreamҲ���� 
*/ 
