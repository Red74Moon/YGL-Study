/*
	Prg7-8.cpp
*/

#include "circle.h"

Circle::Circle(double rds)
{
	if (radius < 0.0)
	{
		assert(false);
	}
}

Circle::Circle()
{

}

Circle::Circle(const Circle& circle)
{

}
Circle::~Circle()
{

}

void Circle::setRadius(double value)
{
	radius = value;
	if (radius < 0.0)
	{
		assert(false);
	}
}

double Circle::getRadius() const
{
	return radius;
}

double Circle::getArea() const
{
	const double PI = 3.14;
	return (PI * radius * radius);
}

double Circle::getPerimeter() const
{
	const double PI = 3.14;
	return (2 * PI * radius);
}