#include<vector>
#include"Location.h"
#include"Set.h"

using std::vector;

vector<bool> NY = {
	true, true, true, true, true,
	true, false, false, false, false,
	false, false, false, false, false,
	false, false, false, false, false, false
};
vector<bool> SF = {
	false, false, false, false, false,
	false, true, true, true, true,
	true, false, false, false, false,
	false, false, false, false, false, false
};
vector<bool> LA = {
	false, false, false, false, false,
	false, false, false, false, false,
	false, true, true, true, true,
	true, false, false, false, false, false
};
vector<bool> CHI = {
	false, false, false, false, false,
	false, false, false, false, false,
	false, false, false, false, false,
	false, true, true, true, true, true
};

Location::Location()
{
	/*Location::nyX(NY);
	Location::nyY(NY);
	Location::sfX(SF);
	Location::sfY(SF);
	Location::laX(LA);
	Location::laY(LA);
	Location::chiX(CHI);
	Location::chiY(CHI);*/

}

string Location::getLocation(Point & p)
{
	int x = p.getX();
	int y = p.getY();

	//check the values in the Point object against the 
	//indexes of the vectors representing the locations
	if (NY[x] == true && NY[y] == true) return " is in New York";
	else
	if (SF[x] == true && SF[y] == true) return " is in San Francisco";
	else
	if (LA[x] == true && LA[y] == true) return " is in Los Angeles";
	else
	if (CHI[x] == true && CHI[y] == true) return " is in Chicago";
	else return "'s Location Not Found";
}

