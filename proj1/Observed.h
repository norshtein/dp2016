#ifndef __OBSERVED_H__
#define __OBSERVED_H__
#include <vector>
using namespace std;
class Observer;

class Observed{
protected:
	vector<Observer*> observers;
public:
	virtual void notify();
	virtual void addOberver(Observer* ob);
	Observed(vector<Observer*> vecObserver = vector<Observer* >()) :observers(vecObserver){}
	virtual bool deleteObserver(Observer* ob);
};

#endif