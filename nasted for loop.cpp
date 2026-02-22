#include<iostream>
#include<windows.h>
using namespace std;

int main()
{
    int n;
    cout<<"enter number";
    cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int x=1;x<=i;x++)
		{
			cout<<"*";
			//sleep(300);
		}
		cout<<endl;
	}
}
