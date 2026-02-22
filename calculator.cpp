#include<iostream>
using namespace std;
int main()
{
	int c,b ,a,ch;
	cout<<"enter two number"<<endl;
	cin>>a>>b;
	cout<<"enter your choice"<<endl;
	cout<<"addition = 1"<<endl;
	cout<<"subsraction= 2"<<endl;
	cout<<"multification = 3"<<endl;
	cout<<"division = 4"<<endl;
	cin>>ch;
	if(ch==1){
		c=a+b;
		cout<<c;
	}
	else if(ch==2)
{

		c=a-b;
		cout<<c;
	}
	else if(ch==3){
		c=a*b;
		cout<<c;
	}
	else if (ch==4){
		c=a/b;
		cout<<c;
	}
	else{
		cout<<"invalid choice";
		
	}
	return 0;
}
