#include "FoodClass.h"
#include <vector>
#include <iostream>

using namespace std;

int main()
{
	vector<Foods> f0 = {{1, "iron"},{2, "fibre"},{3,"carbohytdrates"},{4,"calcium"},{5,"vitamins"}};

	for (auto f:f0)
	{
		cout<<f.getPos()<<""<<f.getType()<<endl;
	}
}
