#include "PizzaClass.h"
#include <string>
using namespace std;

string Pizza::getType()
{
	return type;
}

void Pizza::setType(string f)
{
	type=f;
}

int Pizza::getPos()
{
	return pos;
}

void Pizza::setPos(int i)
{ 
	pos =i;
}

Foods::Foods(int i, string f)
{
	pos=i;
	type=f;
}
