#include "Menu.h"  
#include <vector>  

using namespace std;

#ifndef __COMPOSITEMENU_H__
#define __COMPOSITEMENU_H__
class CompositeMenu : public Menu
{
public:
	CompositeMenu();
	CompositeMenu(std::string);
	virtual ~CompositeMenu();

	void add(Menu*);
	void remove(Menu*);
	Menu* getChild(int);
	void display(int layer = 0);
private:
	vector<Menu*> childs;
};

#endif