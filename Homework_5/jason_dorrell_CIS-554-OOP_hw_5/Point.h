#ifndef POINT_H
#define POINT_H

class Point
{
public:
	explicit Point(int = 0, int = 0);

	//set functions
	void setX(int);
	void setY(int);

	//get functions
	unsigned int getX(); 
	unsigned int getY();

private:
	unsigned int x;
	unsigned int y;
};
#endif