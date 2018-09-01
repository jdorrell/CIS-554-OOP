#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

#include "Point.h"


using std::string;

class Employee
{
	
	
public:

	Employee(string, Point);
	
	//set functions
	void setName(string & name);
	void setCoordinates(Point & point);

	//get functions
	string getName();
	Point getCoordinates();


private:
	string name;
	Point coordinates;
};
#endif