#include<iostream>
using namespace std;
class dad{
	protected:
		int amount;
		public:
			void propty()
			{
				amount=100000;
			}
			
};
class son:public dad
{
	int money,c;
	public:
	void count()	{
		money=100;
		c=amount+money;
		cout<<c;
	}
	
};
int main()
{
	son a;
	a.propty();
	a.count();
	return 0;
}
