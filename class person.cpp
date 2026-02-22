#include<iostream>
using namespace std;
class me{
	public:
	int run;
	string msg;
	void game()
	{
		run=50;
	cout<<"i am run today"<<ends<<run<<"km"<<endl;
	}
	void play()
	{
	msg="today i walk 10 minit";
	cout<<msg;
	}
};
int main()
{
	me obj;
	obj.game();
	obj.play();
	return 0;
}

