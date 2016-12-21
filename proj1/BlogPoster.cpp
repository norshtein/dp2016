#include"BlogPoster.h"

void BlogPoster::setNewMessage(string s)
{
	this->newMessage = s;
}

const string& BlogPoster::getNewMessage()
{
	return this->newMessage;
}
