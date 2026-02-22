#include<iostream>

using namespace std;
class queue{
	private:
	int front;
	int rear;
	int arr[5];
	public:
	queue(){
		front=-1;
		rear=-1;
		for(int i=0;i<5;i++){
			arr[i]=0;
		}
	}
	bool isempty(){
		if(front==-1&&rear==-1){
			return true;
		}
		else {
			return false;
		}
		
	}
	bool isfull(){
	
	if(rear==4){
		return true;
	}
	else{
		return false;
	}
	}
	
	void enqueue(int element){
		if(isfull()){
			cout<<"queue is full"<<endl;}
			
			else if (isempty()){
				rear= 0;
				front=0;
				arr[rear]=element;
			}
			else{
				rear ++ ;
				arr[rear]=element;
							}
		
	}
int dq (){
          int x;
          if (isempty()){
          cout<<"queue is empty"<<endl;
          return 0;
          }
          else if (front == rear) {
          x=arr[front] ;
		  arr [front] =0;
		  rear=-1;
                    
		  return x;      		
		  }
		  else{
		  	x=arr[front]=0;
		  	front++;
		  	return x;
		  }
        }
        void display(){
        	for(int i=0;i<5;i++)
        	cout<<arr[i]<<endl;
		}
                          
};

int main(){
	queue obj;
	int val ;
	obj.enqueue(3);
		obj.enqueue(8);
			obj.enqueue(5);
				obj.enqueue(4);
				obj.enqueue(6);
				
			    	obj.display();
			    	obj.dq();
			    	obj.dq();
			    	cout<<endl;
			    	obj.display();
	
	
}
