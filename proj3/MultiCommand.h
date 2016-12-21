#include"Command.h"
#ifndef __MULTICOMMAND_H__
#define __MULTICOMMAND_H__

class MultiCommand :public Command
{
public:
	virtual void exec();
	virtual void undo();
	MultiCommand(){};
	MultiCommand(double* arr, int begin, int end, double factor) : b(begin), e(end), a(arr), fac(factor){}
private:
	int b, e;
	double* a;
	double fac;
};

#endif