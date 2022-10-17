#include <bits/stdc++.h>

using namespace std;

class node
{
    private:
       int data;
       node *next;
    public:
       void insert(int x);
       void discard(int y);
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

void node::discard(int y)
{
    node *temp1 = head;
    if(y==NULL)
    {
        temp1 = temp1->next;
        free(temp1);
    }
    for(int i=1;i<y-1;i++)
    {
        temp1 = temp1->next;
    }
    node *temp2 = new node();
    temp2 = temp1->next;
    temp1->next = temp2->next;
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
    list.discard(n);
    list.print();
    return 0;
}
