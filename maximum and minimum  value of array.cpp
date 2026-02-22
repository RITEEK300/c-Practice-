//minimum /  maximum value of array program


#include<iostream>
using namespace std;

int main()
{
	int n,mini,max;
	cout<<"enter the size of array"<<endl;
	cin>>n;
	cout<<"enter element of array"<<endl;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		mini=arr[0]	;
		for(int i=0;i<n;i++)
		{
			
			if(mini>arr[i])
			mini=arr[i];
	else if(mini<arr[i])
	max=arr[i];
			
		}
		
	
	}
	cout<<"maximum value of array = "<<max<<endl;
		cout<<"minimum value of array = "<<mini<< endl;}

