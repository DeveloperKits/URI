#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

class Shape
{
protected:
	float width, height;
public:
	void set_data (float a, float b)
	{
		width = a;
		height = b;
	}
};

class Rectangle: public Shape
{
public:
	float area ()
	{
		return (width * height);
	}
};

class Triangle: public Shape
{
public:
	float area ()
	{
		return (width * height / 2);
	}
};

int main (){

	Rectangle rect;
	Triangle tri;
	rect.set_data (6,5);
	tri.set_data (3,5);
	cout << rect.area() << endl;
	cout << tri.area() << endl;
	return 0;
}
