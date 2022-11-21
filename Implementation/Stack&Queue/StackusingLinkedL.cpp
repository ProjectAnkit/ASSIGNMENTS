#include <iostream>
using namespace std;

struct Node{
	int data;
	Node *next;
};
//complete the functions
class Stack{
	Node *head;
	Node *tail;
	int s;
	
	public:
	//constructor is called whenever an object of the class is declared
	Stack(){
		cout<<"constructor is Called\n";
		s=0; 
	}
	
	//push the value at the bottom
	void push(int val){
	    s++;
	    Node *temp = new Node();
	    temp->data = val;
	    temp->next = NULL;
	    if(head == NULL)
	    {
	        head = temp;;
	    }
	    else
	    {
	        Node *temp1 = head;
	        while(temp1->next != NULL)
	        {
	            temp1 = temp1->next;
	        }
	        temp1->next = temp;
	    }
		cout<<"pushing the val: "<<val<<" at the back of stack\n";
	}
	
	int top(){
	    Node *temp = head;
	    while(temp->next!=NULL)
	    {
	        temp = temp->next;
	    }
	    return temp->data;
		cout<<"returning the value at top or last\n";
		return 0;
	}
	
	void pop(){
	    Node *temp = head;
	    while(temp->next->next!= NULL)
	    {
	        temp = temp->next;
	    }
	    temp->next = NULL;
	    --s;
		cout<<"removing the last element\n";
	}
	
	int size(){
		cout<<"return the size of the stack\n";
		return s;
	}
	
	bool isEmpty(){
		cout<<"returning if the stack is empty\n";
		if(s == 0)
		{
		return true;
		}
		else
		{
		    return false;
		}
	}
};

int main() {
	Stack s; //constructor is called on this line
	s.push(4);
	cout<<"top: "<<s.top()<<"\n";
	s.pop();
	cout<<"size: "<<s.size()<<"\n";
	cout<<"empty: "<<s.isEmpty()<<"\n";
	
	s.push(5);
	s.push(3);
	cout<<"front: "<<s.top()<<"\n";
	s.pop();
	cout<<"size: "<<s.size()<<"\n";
	cout<<"empty: "<<s.isEmpty()<<"\n";
	
	cout<<"top: "<<s.top()<<"\n";
	s.pop();
	cout<<"size: "<<s.size()<<"\n";
	cout<<"empty: "<<s.isEmpty()<<"\n";
	return 0;
}
