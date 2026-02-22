#include<iostream>
using namespace std;
class student{
	public:
		string name;
		int roll;
		float phy,chem,math;
};
class declare:public student
{
	public:
		void show()
		{
			cout<<"enter student name"<<endl;
			cin>>name;
			cout<<"enter student roll number"<<endl;
			cin>>roll;
			cout<<"enter enter phy number"<<endl;
			cin>>phy;
			cout<<"enter chem marks "<<endl;
			cin>>chem;
			cout<<"enter math marks "<<endl;
			cin>>math;
		}
};
class riteek:public declare
{public:
	void output(){
		cout<<"name"<<ends<<name<<endl;
		cout<<"roll number"<<ends<<roll<<endl;
	float b1=(chem+phy+math)/300*100;
		cout<<b1<<"%"<<endl;

	
	}

};
int main()
{
	riteek sc;
	sc.show();
	sc.output();
}
