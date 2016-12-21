#include"AddCommand.h"
#include"CommandManager.h"
#include"MultiCommand.h"
#include<iostream>

using namespace std;

double a[100];

void print(char c, int times)
{
	for (int i = 0; i < times; i++)
		putchar(c);
	putchar('\n');
}

void printArray()
{
	cout << "数列为:";
	for (int i = 1; i <= 10; i++)
		printf("%.2f%c", a[i], i == 10 ? '\n' : ' ');
}
int main()
{
	for (int i = 1; i <= 10; i++)
		a[i] = i;

	CommandManager* cm = new CommandManager();
	print('*', 80);
	printArray();
	print('*', 80);

	cout << "操作:" << endl;
	cout << "1 begin end delta : begin~end区间内整体加delta" << endl;
	cout << "2 begin end factor : begin ~end 区间内整体乘delta" << endl;
	cout << "3 撤销上次操作" << endl;
	cout << "4 恢复上次撤销" << endl;
	cout << "5 退出" << endl;
	print('*', 80);

	int type, b, e;
	double d;
	while (scanf("%d", &type) && type != 5)
	{
		switch (type)
		{
		case 1:
			scanf("%d%d%lf", &b, &e, &d);
			cm->executeCommand(new AddCommand(a, b, e, d));
			break;
		case 2:
			scanf("%d%d%lf", &b, &e, &d);
			cm->executeCommand(new MultiCommand(a, b, e, d));
			break;
		case 3:
			if (cm->undo())
				cout << "Success" << endl;
			else
				cout << "Invaild" << endl;
			break;
		case 4:
			if (cm->redo())
				cout << "Success" << endl;
			else
				cout << "Invaild" << endl;
			break;
		}
		print('*', 80);
		printArray();
		print('*', 80);
	}
	return 0;
}