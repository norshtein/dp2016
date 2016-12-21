#include "Menu.h"  
#include "SubMenu.h"  
#include "CompositeMenu.h"  

static void print(char c, int times)
{
	for (int i = 0; i < times; i++)
		putchar(c);
	putchar('\n');
}

int main(int argc, char* argv[])
{
	Menu* mainMenu = new CompositeMenu("全部");
	Menu* home = new CompositeMenu("国内新闻");
	home->add(new SubMenu("时事新闻"));
	home->add(new SubMenu("社会新闻"));
	mainMenu->add(home);

	Menu* foreign = new CompositeMenu("国际新闻");
	foreign->add(new SubMenu("国际要闻"));
	foreign->add(new SubMenu("环球视野"));
	mainMenu->add(foreign);

	mainMenu->display();
	print('*', 60);

	mainMenu->remove(foreign);
	mainMenu->display();
	print('*', 60);

	mainMenu->add(new SubMenu("最新新闻"));
	mainMenu->display();
	return 0;
}