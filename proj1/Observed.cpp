#include"Observed.h"
#include"Observer.h"
void Observed::notify()
{
	for (auto p : observers)
		p->update(this);
}

void Observed::addOberver(Observer* ob)
{
	observers.push_back(ob);
	ob->setObserved(this);
}

bool Observed::deleteObserver(Observer* ob)
{
	auto p = find(observers.begin(), observers.end(), ob);
	if (p == observers.end())
		return false;
	observers.erase(p);
	return true;
}