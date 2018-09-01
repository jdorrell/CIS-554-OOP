#include<vector>
#include "../jason_dorrell_CIS-554-OOP_hw_5/Set.h"

using std::vector;

int main()
{
	vector<bool> v1 = {
		true, false, true, false,
		true, false, true, false,
		true, false, true, false,
		true, false, true, false,
		true, false, true, false,
		true };

	vector<bool> v2 = {
		true, false, true, false,
		false, true, false, true,
		true, false, true, false,
		false, true, false, true,
		true, false, true, false,
		false };

	Set set1(v1);
	Set set2(v2);
	set1.Union(set2);
}