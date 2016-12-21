#ifndef __BLOG_H__
#define __BLOG_H__
#include"Observed.h"
#include<string>

using namespace std;

class BlogPoster : public Observed
{
public:
	const string& getNewMessage();
	void setNewMessage(string s);
private:
	string newMessage;
};

#endif