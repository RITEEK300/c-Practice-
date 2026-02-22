#include <iostream>
#include<string.h> 
void reverse(const string& a);
using namespace std;
int main() {
  string str,reverse;

  cout << " Please enter a string " << endl;
  cin>>str;
    
  // function call
  reverse(str);

  return 0;    
}

// function definition
void reverse(const string& str) {

  // store the size of the string
  size_t numOfChars = str.size();

  if(numOfChars == 1) {
    cout << str << endl;
  }
  else {
    cout << str[numOfChars - 1];

    // function recursion
    reverse(str.substr(0, numOfChars - 1));
  }
}
