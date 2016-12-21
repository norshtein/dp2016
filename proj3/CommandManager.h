#include"Command.h"
#include<stack>

using namespace std;

#ifndef __COMMANDMANAGER_H__
#define __COMMANDMANAGER_H__

class CommandManager
{
protected:
	stack<Command*> undoList; //可以undo的List
	stack<Command*> redoList; //已经undo过的List

public:
	void executeCommand(Command* com);
	bool undo();
	bool redo();

};

#endif