#ifndef PIZZACLASS_H
#define PIZZACLASS_H
#include <string>
using namespace std;

class Foods
{
	private:
		int pos=0;
		string type="";

	public:
		Pizza(int i, string f);
		int getPos ();
		void setPos(int i);
		string getType();
		void setType(string f);
};
#endif
