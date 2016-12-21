#include"Command.h"
#ifndef __ADDCOMMAND_H__
#define __ADDCOMMAND_H__

class AddCommand :public Command
{
public:
	virtual void exec();
	virtual void undo();
	AddCommand(){};
	AddCommand(double* arr, int begin, int end, double delta) :b(begin), e(end), a(arr), del(delta){}
private:
	int b, e;
	double* a;
	double del;
};

#endif