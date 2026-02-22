#include<iostream>
using namespace std;
class A
{
   int a,b;
   public:
	   void value()
	   {
	   	cout<<"enter two number";
	   	cin>>a>>b;
	 }	
	 friend class B;
};
class B{
	int c;
	public:
	void add(A r)
	{
		c=r.a*r.b;
		cout<<c;
	}
};
int main()
{
	A obj;
	obj.value();
	B obj2;
	
obj2.add(obj);
	return 0;
}


















