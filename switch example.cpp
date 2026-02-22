#include<iostream>
using namespace std;
int main(){
	int a,b;
	char ope;
	cout<<"enter two number";
	cin>>a>>b;
	cout<<"enter your operator '+', '-'";
	cin>>ope;
	switch(ope){
	
{
		case '+':
		
	cout<<"addition = "<<a+b;
	break;
}
{
		case '-':
		cout<<"subsraction = "<<a-b;
		break;
		
}
       default:
      {
      	cout<<"invalid operatore";
      	
	  }
}
return 0;	
}
