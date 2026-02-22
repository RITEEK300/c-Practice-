/*#include<iostream>
using namespace std;
int main()
{
	int year;
	cout<<"enter year";
	cin>>year;
	if(year%4==0&& year%400==0)
	{
		cout<<"leap year";
	}
	else if(year%100!=0)
	cout<<"not leap year";
	else{
		cout<<"not leap year";
	}
}*/

#include<iostream>
using namespace std;
int main()
{
	int year;
	cout<<"enter year";
	cin>>year;
	  if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
    cout << year << " is a leap year.";
  }
  else {
    cout << year << " is not a leap year.";
  }

  return 0;
}

