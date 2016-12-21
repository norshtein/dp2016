#include"MultiCommand.h"

void MultiCommand::exec()
{
	for (int i = b; i <= e; i++)
		a[i] *= fac;
}
void MultiCommand::undo()
{
	for (int i = b; i <= e; i++)
		a[i] /= fac;
}