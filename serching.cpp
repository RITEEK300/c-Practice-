#include <iostream>
  using namespace std;

int binarySearch(int arr[], int x ,int n) {
	 int left=0 ;int right=n;
  while (left <= right) {
   int mid =( left+right) / 2;

    if (arr[mid] == x) {
      return mid;
    } else if (arr[mid] < x) {
      left = mid + 1;
    } else {
      right = mid - 1;
    }
  }

  return -1;
}

int main() {
	int n;
	int num;
  int output;
	 cout<<"enter size of array"<<endl;
	 cin>>n;
  int myarr[n];
 
  
  

  cout << "Please enter elements ASCENDING order" << endl;
  for (int i = 0; i<n; i++) {
    cin >> myarr[i];
  }
  cout << "Please enter an element to search" << endl;
  cin >> num;

  output = binarySearch(myarr,num ,n-1);

  if (output == -1) {
    cout << "No Match Found" << endl;
  } else {
    cout << "Match found at position: " << output << endl;
  }

  return 0;}
