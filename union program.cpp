#include<iostream>
using namespace std;
	union str{

	int roll;
	char name[20];
	float mark;
	};
	int main()
{
	union str s;
	cout<<"enter roll number";
	cin>>s.roll;
	cout<<"roll number of student"<<ends<<s.roll;
	cout<<endl<<"enter student name";
	cin>>s.name;
	cout<<"name of the student"<<ends<<s.name;
	cout<<endl<<"enter mark";
	cin>>s.mark;
	cout<<"total mark"<<ends<<s.mark;
	return 0;
	
}
