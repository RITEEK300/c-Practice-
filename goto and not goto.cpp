#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"enter your age";
	cin>>age;
	if(age>=18)
	goto vote;
	else
	goto notvote;
	vote:
	{ cout<<"your  eligible for vote";
	}
	return 0;
	notvote: {
		cout<<"your not eligible for vote";
		
}
return 0;
}
