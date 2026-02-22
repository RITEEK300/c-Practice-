#include<iostream>
using namespace std;
class A{
	int a,b,c;
	public:
	void person(){
		cout<<"enter two number"<<endl;
		cin>>a>>b;
		c=a+b;
		cout<<c<<endl;
	}
	int person(int num1,int num2){
		
		cout<<num1+num2<<endl;
	}
};
int main(){
	A a;
	a.person();
	a.person(10,20);
	return 0;
}
