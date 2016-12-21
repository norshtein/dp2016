#include"Observed.h"
#ifndef __OBSERVER_H__
#define __OBSERVER_H__
using namespace std;

class Observer
{
public:
	virtual void update(Observed*);
	Observer(Observed* pObserved = nullptr) :observed(pObserved){}
	virtual Observed* getObserved();
	virtual void setObserved(Observed* observed);
	virtual void cancelWatch();
protected:
	Observed* observed;
};

#endif