#include"AddCommand.h"

void AddCommand::exec()
{
	for (int i = b; i <= e; i++)
		a[i] += del;
}

void AddCommand::undo()
{
	for (int i = b; i <= e; i++)
		a[i] -= del;
}