//Definitions for class Point
#include <iostream>
#include <iomanip>

#include "Point.h"

using std::cout;
using std::endl;

Point::Point(int x, int y)
{
	setX(x);
	setY(y);
}

void Point::setX(int x)
{
	Point::x = x;
}

void Point::setY(int y)
{
	Point::y = y;
}

unsigned int Point::getX() 
{
	return  x;
}

unsigned int Point::getY() 
{
	return y;
}