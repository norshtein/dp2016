#include"Fans.h"

void Fans::update(Observed* observed)
{
	BlogPoster* pbp = dynamic_cast<BlogPoster*>(observed);
	cout << "From Fans:" << "�����ӣ�����˵��" << pbp->getNewMessage() << " ż��˵ʲô����" << endl;
}