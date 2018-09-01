#ifndef LOCATION_H
#define LOCATION_H

#include<vector>
#include "Set.h"
#include "Point.h"

using std::vector;
using std::string;

class Location
{
public:
	Location();
	string getLocation(Point & p);
	void setLocation();
	/*Set nyX(vector<bool>);
	Set nyY(vector<bool>);
	Set chiX(vector<bool>);
	Set chiY(vector<bool>);
	Set laX(vector<bool>);
	Set laY(vector<bool>);
	Set sfX(vector<bool>);
	Set sfY(vector<bool>);*/
private:
	enum LOCATION {NewYork, SanFrancisco, LosAngeles, Chicago};
	
};
#endif