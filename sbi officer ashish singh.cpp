#include<iostream>
using namespace std;
class sbi{
	private:
		int mob;
		string add,name;

public:
void input(){
	name="ashish singh";
	mob=626091679;
	add="bhopal";
	
	
}
void output(){
	cout<<"sbi secreat officer"<<endl;
	cout<<name<<endl;
	cout<<mob<<endl;
	cout<<add<<endl;
} };
class police:public sbi{
};
	
	
int main()
{
	police a;
	a.input();
	a.output();
	return 0;
}
