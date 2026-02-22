#include<iostream>
using namespace std;
class bank{
	private:

	int atmpin;
	public:
	string holdername;
	int acc;
	string bankname,ifc;
	public:
	void input()
	{
		holdername="riteek";
		bankname="bank of maharashtra";
		ifc="paytem1250";
		acc=60192518;
		atmpin=2028;
	}
	void output()
	{
		cout<<"your bank information"<<endl;
		cout<<"holder name   "<<holdername<<endl;
		cout<<"name of bank  "<<bankname<<endl;
		cout<<"ifc code      "<<ifc<<endl;
		cout<<"account num   "<<acc<<endl;
		cout<<"atm pin       "<<atmpin<<endl;
		
	}
};
int main()
{
	bank a;
	a.input();
	a.output();
	
	cout<<"....................................."<<endl;
	cout<<"raj trying to access my information"<<endl;
	cout<<"holder name   "<<a.holdername<<endl;
		cout<<"name of bank  "<<a.bankname<<endl;
			//cout<<"atm pin       "<<a.atmpin<<endl;
	return 0;
}
