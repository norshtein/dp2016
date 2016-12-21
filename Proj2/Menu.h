#ifndef __MENU_H__
#define __MENU_H__
#include <string>  

using namespace std;

class Menu
{
public:
	virtual ~Menu();

	virtual void add(Menu*);
	virtual void remove(Menu*);
	virtual Menu* getChild(int);
	virtual void display(int layer = 0) = 0;
protected:
	Menu();
	Menu(string);
	string name;
};
#endif
