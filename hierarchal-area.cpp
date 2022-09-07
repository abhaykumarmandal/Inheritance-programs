#include<iostream>
using namespace std;
class Shape
{
	public: double a,b;
		void getdata ()
		{
			cin>>a>>b;
		}
		virtual void displayarea () = 0;
};
class Triangle:public Shape
{
	public: void displayarea ()
	{
		cout<<"Area of triangle "<<0.5*a*b<<endl;
	}
};
class Rectangle:public Shape
{
	public: void displayarea ()
	{
		cout<<"Area of rectangle "<<a*b<<endl;
	}
};
class Circle:public Shape
{
	public: void displayarea ()
	{
		cout<<"Area of Circle "<<3.14*a*a<<endl;
	}
};
int main()
{	
	Triangle t;
	Shape *st = &t;
	cout<<"Enter base and height: ";
	st->getdata();
	st->displayarea();
	Rectangle r;
	Shape *sr = &r;
	cout<<"Enter length and breadth: ";
	sr->getdata();
	sr->displayarea();
    Circle c;
	Shape *sc = &c;
	cout<<"Enter radius of circle two times(both number should be same): ";
	sc->getdata();
	sc->displayarea();
	return 0;	
}