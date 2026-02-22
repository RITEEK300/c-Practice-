#include<iostream>
using namespace std;
int main()
{
	int i,j,a;
	cout<<"enter a number";
	cin>>a;
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=a;j++)
		{
			if(j==1||j==a||j==i){
				cout<"*";
			}else{
				cout<<" ";
			}
			
		}
		cout<<endl;
		
	}
	
}
