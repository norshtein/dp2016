#include"CommandManager.h"

void CommandManager::executeCommand(Command* com)
{
	com->exec();
	undoList.push(com);
	while (!redoList.empty())
		redoList.pop();
}

bool CommandManager::undo()
{
	if (undoList.empty())
		return false;
	Command* p = undoList.top();
	undoList.pop();
	p->undo();
	redoList.push(p);
	return true;
}

bool CommandManager::redo()
{
	if (redoList.empty())
		return false;
	Command* p = redoList.top();
	redoList.pop();
	p->exec();
	undoList.push(p);
	return true;
}