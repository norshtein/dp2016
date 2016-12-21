#include "SubMenu.h"  
#include <iostream>  

using namespace std;

SubMenu::SubMenu()
{

}

SubMenu::SubMenu(string strName) : Menu(strName)
{

}

SubMenu::~SubMenu()
{

}
static void print(char c, int times)
{
	for (int i = 0; i < times; i++)
		putchar(c);
}
void SubMenu::display(int layer)
{
	print('-', layer);
	cout << name << endl;
}