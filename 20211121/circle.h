/*
	Prg7-7.cpp
*/

#pragma once
#ifndef CIRCLE_H
#define CIRCLE_H
#include <iostream>
#include <cassert>
#include "circle.h"

using namespace std;

class Circle
{
private:
	double radius;
public:
	Circle(double radius);
	Circle();
	Circle(const Circle& circle);
	~Circle();

	void setRadius(double radius);
	double getRadius() const;
	double getArea() const;
	double getPerimeter() const;
};
#endif

