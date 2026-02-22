#include <iostream>
using namespace std;
class node
{public:
    int data;
    node *next;
    node(int val){
    	data=val;
    	next=NULL;
	}
   
   
};
void aadatfirst(node *&head ,int val){
	 node* n = new node(val);
   
    if (head == NULL) {
    	head=n;
      return;
    }
    node* temp=head;
    while(temp->next!=NULL){
    	temp=temp->next;
    	
	}
	temp->next=n;
}


void linkedListTraversal(node *head)

{
	node*ptr=head;
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

// Case 1: Deleting the first element from the linked list


// Case 2: Deleting the element at a given index from the linked list
node *deleteAtIndex(node * head, int index){
if(index==0){

    node * ptr = head;
    head = head->next;
    delete ptr;
   return head;

}
else
{
	
    node *p = head;
    node *q = head->next;
    for (int i = 0; i < index-1; i++)
    {
        p = p->next;
        q = q->next;
    }
    
    p->next = q->next;
    delete q;
   return head;
}
}



int main()
{
	node* head=NULL;
	aadatfirst(head,3);
aadatfirst(head,4);
aadatfirst(head,9);
   linkedListTraversal(head);
   int c;
cout<<"enter note position for delete";
cin>>c;
 deleteAtIndex(head, c);
 
    printf("Linked list after deletion\n");
    linkedListTraversal(head);


    return 0;
}
