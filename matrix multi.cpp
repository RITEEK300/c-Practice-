#include<iostream>
using namespace std;
int main()
{
	int a[10][10],b[10][10],c[10][10];
	int n,m,i,j,k;
	cout<<"enter the size of array"<<endl;
	cin>>n>>m;
	cout<<"enter element of frist matrix"<<endl;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	cout<<"enter element of second matrix"<<endl;
for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cin>>b	[i][j];
		
		}
}
for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			c[i][j]=0;
			for(k=0;k<n;k++)
			{
				c[i][j]=c[i][j]+a[i][k]*b[k][j];
			}
			
		
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cout<<c[i][j]<<ends;
		}cout<<endl;
		}
		
	
}
