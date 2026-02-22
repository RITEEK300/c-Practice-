#include<iostream>
using namespace std;
class DAD{
	protected:
	int amount;
	public:
		void propety()
		{
			amount=10000;
		}
	
};
class son : public DAD{
	protected:
	int money,c;
	public:
		void total()
		{
			money=50;
			//c=amount+money;
			
		}
};
class son2:public son{
	int propety2, c;
	public:
	void total2()
	{
		propety2=200;
		c=amount+money+propety2;
		cout<<c;
	}
	
	
};
int main()
{
	son2 a;
	a.propety();
	a.total();
	a.total2();
	return 0;
}
