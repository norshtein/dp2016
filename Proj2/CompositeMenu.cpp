#include "CompositeMenu.h"  
#include <iostream>  

using namespace std;

CompositeMenu::CompositeMenu()
{

}

CompositeMenu::CompositeMenu(string strName) : Menu(strName)
{

}

CompositeMenu::~CompositeMenu()
{

}

void CompositeMenu::add(Menu* pMenu)
{
	childs.push_back(pMenu);
}

void CompositeMenu::remove(Menu* pMenu)
{
	auto p = find(childs.begin(), childs.end(), pMenu);
	if (p != childs.end())
		childs.erase(p);
}

Menu* CompositeMenu::getChild(int index)
{
	return childs[index];
}

static void print(char c, int times)
{
	for (int i = 0; i < times; i++)
		putchar(c);
}
void CompositeMenu::display(int layer)
{
	print('-', layer - 1);
	cout << "+";
	cout << name << endl;
	for (auto it = childs.begin(); it != childs.end(); ++it)
	{
		cout << "|";
		(*it)->display(layer + 1);
	}
}
