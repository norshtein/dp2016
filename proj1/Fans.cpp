#include"Fans.h"

void Fans::update(Observed* observed)
{
	BlogPoster* pbp = dynamic_cast<BlogPoster*>(observed);
	cout << "From Fans:" << "嘤嘤嘤，男神说：" << pbp->getNewMessage() << " 偶像说什么都对" << endl;
}