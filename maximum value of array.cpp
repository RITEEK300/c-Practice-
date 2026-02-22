#include<iostream>
using namespace std;
int main()
{
	int n,max;
	cout<<"enter the size of array";
	cin>>n;
	cout<<"enter element of array";
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		max=arr[0]	;
		for(int i=0;i<n;i++)
		{
			
			if(max>arr[i])
			max=arr[i];
		}
	
	}
		cout<<max;
}
