#include<iostream>
using namespace std;
class ashish
{
	int length;
	public:
		void total()
{
	cout<<"enter length";
	cin>>length;
	
		}	
		friend void riteek(ashish r);	
};

void riteek(ashish r)
{
	int breath,c;
	cout<<"enter breath";
	cin>>breath;
	c=r.length*breath;
	cout<<c;
	
}
int main(){
	ashish o;
	o.total();
	riteek(o);
	return 0;
}
