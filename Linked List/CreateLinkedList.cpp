#include <iostream>
using namespace std;

//you can also use class
struct Node{
	int data;
	Node *next;
};

Node *createLinkedList(int n,Node*head){
 
 int val;
  for(int i=1;i<=n;i++)
  {
     cout<<"Enter "<<i<<"nth element :";
     cin>>val;
  Node *temp = new Node();
  temp->data = val;
  temp->next = NULL;
  
  if(head==NULL){
      head = temp;
  }
  else
  {
      Node *temp1 =head;
      while(temp1->next!=NULL)
      {
          temp1 = temp1->next;
      }
      temp1->next = temp;
  }
  }
  return head;  
}
 
 /**
  * printLinkedList will print all the elemets of linked list
  * */
void printLinkedList(Node *head){
	Node *temp = head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	
}

int main() {
	// your code goes here
	int n;
	cin>>n;
	Node* head=NULL;
	head =createLinkedList(n,head);
	cout<<"printing List :"<<endl;
	printLinkedList(head);
	return 0;
}
