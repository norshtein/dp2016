#ifndef __COMMAND_H__
#define __COMMAND_H__
class Command
{
public :
	virtual void exec() = 0;
	virtual void undo() = 0;
};
#endif