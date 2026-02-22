#include<iostream>
using namespace std;
int a,b,c;
class A{
	public:
	void input()
	{
		cout<<"enter two number"<<endl;
		cin>>a>>b;
		}
		void add()
		{
			c=a+b;
			cout<<"addition"<<c<<endl;
		}
};
class B:public A
{
	public:
	void sub(){
	c=a-b;
	cout<<"substraction"<<c<<endl;
	}
};
class C:public B{
	public:
void multi()
{
	c=a*b;
	cout<<"multification"<<c<<endl;
	}	
};
class D:public C{
	public:
	void div()
	{
		c=a/b;
		cout<<"divsion"<<c<<endl;
	}
};
int main()
{
	D a;
	a.input();
	a.sub();
	a.add();
	a.div();
	a.multi();
	return 0;
}
