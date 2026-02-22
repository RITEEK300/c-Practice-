#include<iostream>
using namespace std;
class ankush{
	string tv;
	public:
	void show()
	{
		tv="today ipl final match 2022";
		cout<<tv;
	}
};
	class ankit:public ankush{
	
	public:
		void watch(){
		
		cout<<"i am ankit watching tv";
		
	}
};
int main()
{
	ankit o;
	o.watch();
	return 0;
}
