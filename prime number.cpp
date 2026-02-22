#include <bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k;
	cout<<"enter a number"<<endl;
	cin>>k;
	for(i=0;i<=k;i++){
		for(j=2;j<=i;j++)
		{
			if(i%j==0)
				break;
		}
			 
			
			if(i==j)
				cout<<"prime number = "<<j<<endl;
				
			
			
		}
		
	
	
	return 0;
}
