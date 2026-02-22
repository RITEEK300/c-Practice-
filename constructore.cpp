#include<iostream>
using namespace std;
int a=0;
class A{
	public:
	A()
	{
		cout<<"created   "<<++a<<"   object"<<endl;
	}
	~A()
	{
	    cout<<"deleted  "<<a--<<"  object"<<endl;	
	}
};
int main()
{
	A obj1,obj2,obj3;
	return 0;
}
