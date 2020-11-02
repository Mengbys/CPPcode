#include<iostream>
#define PI 3.14159
using namespace std;

class Shape //含有纯虚函数，是抽象类
{
	public:
		virtual float area()
		{
			return 0.0;
		}
		virtual float volume()
		{
			return 0.0;
		}
		virtual void shapeName() = 0; //纯虚函数
};

class Point: public Shape
{
	protected:
		float x, y;
	public:
		Point(float _x = 0, float _y = 0)
		{
			x = _x;
			y = _y;
		}
		float getX()
		{
			return x;
		}
		float getY()
		{
			return y;
		}
		virtual void shapeName()
		{
			cout << "Point: \n";
		}
};

class Circle: public Point
{
	protected:
		float radius;
	public:
		Circle(float _x = 0, float _y = 0, float _radius = 0): Point(_x, _y)
		{
			radius = _radius;
		}
		float getRadius()
		{
			return radius;
		}
		virtual float area()
		{
			return PI * radius * radius;
		}
		virtual void shapeName()
		{
			cout << "Circle: \n";
		}
};

class Cylinder: public Circle
{
	protected:
		float height;
	public:
		Cylinder(float _x, float _y, float _radius, float _height): Circle(_x, _y, _radius)
		{
			height = _height;
		}
		float getHeight()
		{
			return height;
		}
		virtual float area()
		{
			return 2 * Circle::area() + 2 * PI * radius * height;
		}
		virtual float volume()
		{
			return Circle::area() * height;
		}
		virtual void shapeName()
		{
			cout << "Cylinder: \n";
		}
};

int main()
{
	Point point0(2, 3);
	Circle circle0(2, 3, 2);
	Cylinder cylinder0(2, 3, 2, 2);


	/*静态关联*/
	point0.shapeName();
	cout << "x: " << point0.getX() << endl;
	cout << "y: " << point0.getY() << endl;
	cout << "area: " << point0.area() << endl;
	cout << "volume: " << point0.volume() << endl << endl;

	circle0.shapeName();
	cout << "x: " << circle0.getX() << endl;
	cout << "y: " << circle0.getY() << endl;
	cout << "radius: " << circle0.getRadius() << endl;
	cout << "area: " << circle0.area() << endl;
	cout << "volume: " << circle0.volume() << endl << endl;

	cylinder0.shapeName();
	cout << "x: " << cylinder0.getX() << endl;
	cout << "y: " << cylinder0.getY() << endl;
	cout << "radius: " << cylinder0.getRadius() << endl;
	cout << "height: " << cylinder0.getHeight() << endl;
	cout << "area: " << cylinder0.area() << endl;
	cout << "volume: " << cylinder0.volume() << endl << endl;


	/*动态关联*/
	Shape *ptr;
	ptr=&point0;
	ptr->shapeName();
	cout << "x: " << point0.getX() << endl;
	cout << "y: " << point0.getY() << endl;
	cout << "area: " << ptr->area() << endl;
	cout << "volume: " << ptr->volume() << endl << endl;
	
	ptr=&circle0;
	ptr->shapeName();
	cout << "x: " << circle0.getX() << endl;
	cout << "y: " << circle0.getY() << endl;
	cout << "radius: " << circle0.getRadius() << endl;
	cout << "area: " << ptr->area() << endl;
	cout << "volume: " << ptr->volume() << endl << endl;
	
	ptr=&cylinder0;
	ptr->shapeName();
	cout << "x: " << cylinder0.getX() << endl;
	cout << "y: " << cylinder0.getY() << endl;
	cout << "radius: " << cylinder0.getRadius() << endl;
	cout << "height: " << cylinder0.getHeight() << endl;
	cout << "area: " << ptr->area() << endl;
	cout << "volume: " << ptr->volume() << endl << endl;	


	return 0;
}


/*
纯虚函数：在抽象类中声明，在派生类中定义。
抽象类：含有纯虚函数的类，不能用来具现化（不能用来生成对象）。 
*/ 

