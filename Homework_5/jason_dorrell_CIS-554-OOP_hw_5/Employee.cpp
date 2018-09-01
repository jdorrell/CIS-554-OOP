//Definitions for class Employee
#include <iostream>
#include <iomanip>

#include "Employee.h"
#include "Point.h"

using std::string;
using std::cout;

Employee::Employee(string name, Point coordinates)
{
	setName(name);
	setCoordinates(coordinates);
}

void Employee::setName(string & name)
{
	Employee::name = name;
}

void Employee::setCoordinates(Point & coordinates)
{
	Employee::coordinates.setX(coordinates.getX());
	Employee::coordinates.setY(coordinates.getY());
}

Point Employee::getCoordinates()
{
	return Employee::coordinates;
}

string Employee::getName()
{
	return Employee::name;
}
