#ifndef __SUBMENU_H__
#define __SUBMENU_H__
#include "Menu.h"  

class SubMenu : public Menu
{
public:
	SubMenu();
	SubMenu(std::string);
	virtual ~SubMenu();

	void display(int layer = 0);
};
#endif