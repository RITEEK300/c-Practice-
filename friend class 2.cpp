#include<iostream>
using namespace std;
class ankus
{
	public:
int length ;
public:
	void calculation()
	{
		length=10;
		
	}	
	friend void ankit (ankus r);
};
 void anki (ankus r )
{
	int breath=10;
	int c;
	c=r.length*breath;
	cout<<c;
	
	
	
}
int main()
{
 ankus obj;
 obj.calculation();
 anki(obj);
 return 0;
}
