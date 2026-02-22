#include<iostream>
using namespace std;
int main()
{
	int a,b,c,ch;
	cout<<"enter two number";
	cin>>a>>b;
	cout<<"enter your choice";
	cin>>ch;
	if(ch==1){
			c=a+b;
			cout<<"additon = "<<c;
			
	}
	else if(ch==2)
	{
		c=a*b;
		cout<<"multification = "<<c;
	}
	else if(ch==3)
	{
		c=a/b;
		cout<<"division = "<<c;
		
	}
	else {
		cout<<"invalid choice";
	}
	return 0;

	
}
