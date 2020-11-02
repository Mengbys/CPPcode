#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	char x = 'q';
	char y;
	
	/*打开ASCII文件*/
	ofstream outfile;
	outfile.open("c.txt");
//	fstream outfile("a.txt");

	ifstream infile;
	infile.open("c.txt");
//	fstream infile("b.txt");

	fstream iofile;
	iofile.open("c.txt");
//	fstream iofile("c.txt");

	/*写到ASCII文件中*/
	iofile << x;
	iofile.close();
	iofile.open("c.txt");  
	
	/*从ASCII文件中读*/
	iofile >> y;
	cout << y << endl; 

	/*关闭ASCII文件*/
	outfile.close();
	infile.close();
//	iofile.close();


	return 0;
}

/*
iofile << x;
iofile >> y;
cout << y << endl; 
无输出

outfile << x;
infile >> y;
cout << y << endl;
无输出 

iofile << x;
iofile.close();
iofile.open("c.txt");
iofile >> y;
cout << y << endl; 
有输出 
*/

/*
ofstream对象默认为ios::out，ifstream对象默认为ios::in，fstream对象默认为ios::in|ios::out
strstream也类似 
*/ 
