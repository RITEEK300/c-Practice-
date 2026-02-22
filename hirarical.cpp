#include<iostream>
using namespace std;
class A{
	public:
		int a,b,c;
		public:
			void input()
		{
		cout<<"enter two number";
		cin>>a>>b;}
};
class B:public A
{
	public:
void add(){
	
	cout<<a+b<<endl;
}	
};
class C:public A{
	public:
	void div()
	{
		cout<<a-b;
	}
};
int main(){
	B a;
	C b;
	a.input();
	b.input();
	a.add();
	b.div();
	return 0;
}

