#include<iostream>
using namespace std ;
int count=0;
class riteek
{
	 
	public:
	riteek()
	{
		cout<<"memory allocated "<<++count<<endl;
	}
	~riteek()
	{
		cout<<"memory dellocatred "<<count--<<endl;
	}
};
int main()
{
	riteek obj1,obj2,obj3;
}
