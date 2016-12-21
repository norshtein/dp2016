#ifndef __FANS_H__
#define __FANS_H__

#include"Observer.h"
#include"BlogPoster.h"
#include<iostream>

class Fans : public Observer{
public:
	virtual void update(Observed*);
};

#endif