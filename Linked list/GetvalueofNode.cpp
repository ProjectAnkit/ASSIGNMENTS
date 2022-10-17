#include <bits/stdc++.h>

using namespace std;

class node
{
    private:
       int data;
       node *next;
    public:
       void insert(int x);
       void value(int y);
       void print();
};


node *head;

void node::insert(int x)
{
    node *temp = new node();
    temp->data = x;
    temp->next = head;
    head = temp;
}

void node::value(int y)
{
 if(head == NULL)
 {
     cout<<"NULL";
 }
 int counter=0,forward=0;
 node *temp1 = head;
 node *temp2 = head;
 while(temp1!=NULL)
  {
    forward++;
    temp1=temp1->next;
    if(forward-counter > y-1)
    {
        temp2= temp2->next;
        counter++;
    }
  }
   cout<<"\n"<<temp2->data;
}

void node::print()
{
     
    node *temp = head;
    cout<<"List is :";
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main()
{
    int n;
    node list;
    head = NULL;
    cout<<"Enter the position :";
    cin>>n;
    list.insert(15);
    list.insert(17);
    list.insert(20);
    list.insert(30);
    list.print();
    list.value(n);
   
    return 0;
}
