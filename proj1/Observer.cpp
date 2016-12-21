#include"Observer.h"
Observed* Observer::getObserved()
{
	return this->observed;
}
void Observer::setObserved(Observed* observed)
{
	this->observed = observed;
}

void Observer::cancelWatch()
{
	this->observed->deleteObserver(this);
	this->observed = nullptr;
}
void Observer::update(Observed* observed)
{

}