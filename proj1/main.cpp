#include"BlogPoster.h"
#include"Fans.h"
#include"Observed.h"
#include"Observer.h"
#include"TextCounter.h"

int main()
{
	BlogPoster* pBlogPoster = new BlogPoster();
	const int colLength = 80;
	for (int i = 0; i < colLength; i++)
		cout << '*';
	cout << endl;

	cout << "Simulate blog post,Operations:" << endl;

	cout << "1 string The blog poster post a blog and all person observer it will be noticed" << endl;
	cout << "2 Create a word counter and make it listen to blog poster" << endl;
	cout << "3 Creater a fans and make it listen to blog poster" << endl;
	cout << "4 Delete a word counter in listening sequence" << endl;
	cout << "5 Delete a fans in listening sequence" << endl;
	cout << "6 quit" << endl;

	for (int i = 0; i < colLength; i++)
		cout << '*';
	cout << endl;

	int command;
	string s;
	vector<Observer*> fans;
	vector<Observer*> counters;
	while (cin >> command)
	{
		switch (command)
		{
		case 1:
			cin >> s;
			pBlogPoster->setNewMessage(s);
			pBlogPoster->notify();
			break;
		case 2:
		{
				  Observer* ob = new TextCounter();
				  pBlogPoster->addOberver(ob);
				  counters.push_back(ob);
				  break;
		}
		case 3:
		{
				  Observer* ob = new Fans();
				  pBlogPoster->addOberver(ob);
				  fans.push_back(ob);
				  break;
		}
		case 4:
		{
				  if (counters.begin() != counters.end())
					  pBlogPoster->deleteObserver(*counters.begin());
				  else
					  cout << "Empty!" << endl;
				  break;
		}
		case 5:
		{
				  if (fans.begin() != fans.end())
					  pBlogPoster->deleteObserver(*fans.begin());
				  else
					  cout << "Empty!" << endl;
				  break;
		}
		case 6:
			return 0;
		default:
			break;
		}
	}
	return 0;
}