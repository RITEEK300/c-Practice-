#include<iostream>
using namespace std;
int main(){
	int a,b,t,sum;
	cout<<"enter a number";
	cin>>a;
	while(a>0)
	{
		b=a%10;
		cout<<b;
		a=a/10;
	}

}
