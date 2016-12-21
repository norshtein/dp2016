#ifndef __TEXTCOUNTER_H__
#define __TEXTCOUNTER_H__
#include"Observer.h"
#include"BlogPoster.h"
#include<iostream>

class TextCounter : public Observer{
public:
	virtual void update(Observed*);
};

#endif