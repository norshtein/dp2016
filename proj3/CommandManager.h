#include"Command.h"
#include<stack>

using namespace std;

#ifndef __COMMANDMANAGER_H__
#define __COMMANDMANAGER_H__

class CommandManager
{
protected:
	stack<Command*> undoList; //����undo��List
	stack<Command*> redoList; //�Ѿ�undo����List

public:
	void executeCommand(Command* com);
	bool undo();
	bool redo();

};

#endif