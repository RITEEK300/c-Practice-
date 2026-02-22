#include<iostream>
using namespace std;
int main(){
	int a,b,sum,t;
	cout<<"enter a nuambe";
	cin>>a;
	t=a;
	while(a>0){
		b=a%10;
		sum=sum+b*b*b;
		a=a/10;
	}
	if(t==sum)
		{
			cout<<"arm";
		}
	
	
}
