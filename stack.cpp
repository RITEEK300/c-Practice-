#include<iostream>
#include<string>
using namespace std;
class stack{
	private:
		int top;
		int arr[5];
		public:
			stack(){
			top=-1;
			for(int i=0;i<5;i++){
				arr[i]=0;
			}
			}
			bool isempty(){
				if(top==-1)
				
					return true;
				
				else 
				return false;
			}
			bool isfull(){
				if(top==4)
				return true;
				else 
				return false;
			}
			void push(int element){
				if(isfull())
				
				{
					cout<<"stack is overflow"<<endl;
				}
				else{
					top++;
					arr[top]=element;
				}
			}
			int pop(){
				if(isempty())
				{
					cout<<"stack is underflow"<<endl;
				}
				else{
					int temp=arr[top];
					arr[top]=0;
					top--;
					return temp;
				}
			}
			int peek(int pos){
				if(isempty()){
					cout<<"stack is underflow"<<endl;
					return 0;
				}
				else{
						return arr[pos];
				}
				
				
				
				
			}
		int count (){
			return (top+1);
		}
			void display(){
					for(int i=0;i<5;i++){
						cout<<arr[i]<<"->";
					}
					cout<<endl;
				}
			
};
int main(){
				stack s1;
				int element;
				s1.push(2);
			    s1.push(4);
	            s1.push(6);   	
		        s1.push(8);	
		        s1.push(7);
		        s1.display();
		        s1.pop();
		         s1.pop();
		          s1.pop();
		        s1.display();
		         s1.pop();
		          s1.display();
		        s1.peek(6);
		        s1.count();
					return 0;

			}
		
