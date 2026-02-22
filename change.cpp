#include<iostream>
using namespace std;
int main()
{
	string a,b;
	cout<<"enter your two string"<<endl;
	cin>>a>>b;
	cout<<a.size()<<" "<<b.size()<<endl;
	cout<<a+b<<endl;
	char t;
	t=a[0];
	a[0]=b[0];
	b[0]=t;
	cout<<a<<ends<<b;	
	
}
