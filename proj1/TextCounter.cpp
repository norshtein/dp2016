#include"TextCounter.h"

void TextCounter::update(Observed* observed)
{
	BlogPoster* pbp = dynamic_cast<BlogPoster*>(observed);
	cout << "From TextCounter: the message is \"" << pbp->getNewMessage() << "\" and it's length is " << pbp->getNewMessage().size() << endl;
}