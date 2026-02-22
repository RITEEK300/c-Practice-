// CPP program to illustrate
// concept of Virtual Functions

#include<iostream>
using namespace std;

class riteek {
	string tv;
	public:
		
	void setdata()
	{
		tv="i am waching tv";
		cout<<tv<<endl;
		
	}
	friend class riteek3;
};
class riteek3{
	public:
	void riteek2 (riteek r)
 {
 	r.tv="i am also watching tv";
 	cout<<r.tv;
 }
};
 
 int main()
 {
 	riteek obj;
 	obj.setdata();
 	riteek3 obj2;
 	obj2.riteek2(obj);
 }



