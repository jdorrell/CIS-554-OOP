#include<iostream>
#include<string>

#include"Employee.h"
#include"Point.h"
#include"Location.h"

using std::cout;
using std::cin;
using std::string;
using std::endl;

int main()
{
	
	string name;
	int x = 0;
	int y = 0;
	while (x != -1 && y != -1)
	{
		//Take user input
		cout << "Enter employee name : ";
		cin >> name;
		cout << endl;
		cout << "Enter x position (-1 to quit) : ";
		cin >> x;
		if (x == -1)exit(0);
		cout << endl;
		cout << "Enter y position (-1 to quit) : ";
		cin >> y;
		if (y == -1)exit(0);
		cout << endl;
		//Instantiate objects
		Point point(x, y);
		Employee emp(name, point);
		Location location = Location::Location();
		//Check employee location
		Point coords = emp.getCoordinates();
		string empLocation = location.getLocation(coords);
		cout << emp.getName() << empLocation << endl;
	}

	return 0;
}