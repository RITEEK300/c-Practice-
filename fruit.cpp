#include<iostream>
using namespace std;
class fruit2;
class fruit{
	int a;
	public:
	void seb()
	{
		 a=10;
	}
	friend void riteek(fruit p1,fruit2 p2 );
};
class fruit2{
	int b;
	public:
		void seb2()
		{
		 b=20;
		}
		friend void riteek( fruit p1,fruit2 p2);
};
void riteek(fruit p1,fruit2 p2)
{
	int c;
	c=p1.a+p2.b;
	cout<<c;
}
int main()
{
	fruit o;
	
	o.seb();
	fruit2 o2;
	o2.seb2();
	riteek(o,o2);
	return 0;
}
