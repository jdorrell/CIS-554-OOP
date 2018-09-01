#include<iostream>
#include<vector>

#include"Set.h"

using std::cout;
using std::endl;

Set::Set(vector<bool> & p)
{
	Set::thisSet = vector<bool>();
	for (int i = 0; i < sizeof(p); i++)
	{
		Set::thisSet[i] = true;
	}
}

bool Set::isMember(int x)
{
	return Set::thisSet[x];
}

Set Set::Union(Set & s)
{
	vector<bool> v = vector<bool>();
	Set * u = &Set::Set(v);
	Set * x = &s;
	for (int i = 0; i < sizeof(s); i++) 
	{
		if (s.isMember(i) || u->isMember(1))
		{
			printf("succes");
		}
	}

	return s;
}

Set Set::Intersection(Set & s)
{
	vector<bool> v = vector<bool>();
	
	for (int i = 0; i < sizeof(s); i++)
	{
		if (s.isMember(i) && Set::isMember(thisSet[i]))
		{
			v[i] = true;
		}
	}

	return v;
}

void Set::printThisSet()
{
	for (int i = 0; i < sizeof(Set::thisSet); i++)
	{
		cout << Set::thisSet[i] << ", " << endl;
	}
}