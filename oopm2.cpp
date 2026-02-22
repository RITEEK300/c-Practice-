#include<iostream> 
using namespace std; 
class Circle 
{ 
 // private data member 
private: 
int value; 
 // public member function 
public: 
int compute_area(int val) 
 { // member function can access private 
 // data member radius 
 value=val;
return val+6;
 } 
 };
// main function 
int main() 
{ // creating object of the class 
 Circle obj; 
 // trying to access private data member 
 // directly outside the class 
cout<<obj.compute_area(90); 
return 0; 
} 
