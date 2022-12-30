#include <bits/stdc++.h>

using namespace std;

class Node{
    private:
       int data;
       Node *next;
    public:
       void insert(int x);
       void size();
       void print();
};

Node *head;

void Node::insert(int x)
{
    Node *temp = new Node();
    temp->data = x;
    temp->next = NULL;
    
    if(head==NULL)
    {
        head = temp;
    }
    else
    {
        Node *temp1 = head;
        while(temp1->next!=NULL)
        {
            temp1 = temp1->next;
        }
        temp1->next = temp;
    }
}

void Node::print(){
    Node *temp1 = head;
    while(temp1!=NULL)
    {
        cout<<temp1->data<<" ";
        temp1 = temp1->next;
    }
}

void Node::size(){
    int data=0;
    Node *temp = head;
    while(temp!= NULL)
    {
       temp = temp->next; 
       data++;
    }
    cout<<data;
}

int main()
{
    Node list;
    int choice,data;
    while(1)
    {
    cout<<"\n\n1. Insert Element "<<endl;
    cout<<"2. Print Elements "<<endl;
    cout<<"3. Size of List  "<<endl;
    cout<<"4. Exit \n"<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1: {
            cin>>data;
            list.insert(data);
        }
        break;
        
        case 2: {
            list.print();
        }
        break;
        
        case 3: {
            cout<<"Size is :";
            list.size();
        }
        break;
        
        case 4: {
            exit(1);
        }
        break;
        
        default: {
            cout<<"Invalid Choice !";
        }
    }
    }
   return 0; 
}
