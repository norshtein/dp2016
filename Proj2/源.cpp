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
	Menu* mainMenu = new CompositeMenu("ȫ��");
	Menu* home = new CompositeMenu("��������");
	home->add(new SubMenu("ʱ������"));
	home->add(new SubMenu("�������"));
	mainMenu->add(home);

	Menu* foreign = new CompositeMenu("��������");
	foreign->add(new SubMenu("����Ҫ��"));
	foreign->add(new SubMenu("������Ұ"));
	mainMenu->add(foreign);

	mainMenu->display();
	print('*', 60);

	mainMenu->remove(foreign);
	mainMenu->display();
	print('*', 60);

	mainMenu->add(new SubMenu("��������"));
	mainMenu->display();
	return 0;
}