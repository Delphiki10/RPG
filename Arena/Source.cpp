#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <set>
#include <iomanip>
/*#include "FighterInterface.h"
#include "Factory.h"
#include "ArenaInterface.h"
#include "Arena.h"
#include "Fighter.h"
#include "Cleric.h"
#include "Robot.h"
#include "Archer.h"
*/
using namespace std;

void addFighter(set<string> Fighters, string input);
bool correct(string input);

int main()
{
	set<string> Fighters;
	string input;
	while (getline(cin, input))
	{
		addFighter(Fighters, input);
	}


}
//Adds Fighter to the vector
void addFighter(set<string> Fighters, string input)
{
	stringstream ss;
	string name;
	char type;
	int hitpoints;
	int strength;
	int speed;
	int magic;
	if (correct(input))
	{
		ss << input;
		ss >> name;
		ss >> type;
		ss >> hitpoints;
		ss >> strength;
		ss >> speed;
		ss >> magic;
	}

}
//Determines if input is correct
bool correct(string input)
{
	stringstream ss;
	string name;
	char type;
	int hitpoints;
	int strength;
	int speed;
	int magic;
	ss << input;
	ss >> name;
	ss >> type;
	if (type != ("C" || "R" || "A"))
		return false;
	ss >> hitpoints;
	ss >> strength;
	ss >> speed;
	ss >> magic;
	if ((hitpoints || strength || speed || magic) < 0)
		return false;
	return true;

}
