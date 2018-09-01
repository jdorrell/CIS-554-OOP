#ifndef SET_H
#define SET_H

#include<vector>
#include"Location.h"

using std::vector;

class Set
{
public:
	Set(vector<bool> & v);
	bool isMember(int x);
	void printThisSet();
	Set Union(Set & s);
	Set Intersection(Set & s);
private:
	vector<bool> thisSet;
};
#endif