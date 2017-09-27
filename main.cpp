#include "PizzaClass.h"
#include <vector>
#include <iostream>

using namespace std;

int main()
{
	vector<Pizza> f0 = {{1, "peperoni"},{2, "corn"},{3,"pineapple"},{4,"mincemeat"},{5,"cheese"}};

	for (auto f:f0)
	{
		cout<<f.getPos()<<""<<f.getType()<<endl;
	}
}
