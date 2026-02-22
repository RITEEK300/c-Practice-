#include<iostream>
using namespace std;
int main(){
	int mark;
	cin>>mark;
	if(mark>100)
	{
		cout<<"wrong input";
	}
	else if(mark>=90){
		cout<<"A+ gread";
	}
	else if(mark>=80)
	{
		cout<<"b gread";
	}
	else if(mark>=65)
	{
		cout<<"c gread";
	}
	else if(mark>=50)
	{
		cout<<"d gread";
	}
	else{
		cout<<"fail";
	}
}
