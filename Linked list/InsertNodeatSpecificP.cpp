#include <iostream>

using namespace std;

class node
{
    private:
       int data;
       node *next;
    public:
       void insert (int x);
       void insert (int X,int n);
       void print ();
};

node *head;

void node::insert(int x)
{
    node *temp = new node();
    temp->data = x;
    temp->next = head;
    head = temp;
}

void node::insert(int X,int n)
{
    node *temp = new node();
    temp->data = X;
    temp->next = NULL;
    if (n==1)
    {
        temp->next = head;
        head = temp;
    }
    else 
    {
        node *temp2 = new node();
        temp2 = head;
        for(int i=1;i<n-1;i++)
        {
            temp2 = temp2->next;
        }
        temp->next = temp2->next;
        temp2->next = temp;
    }
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
    node list;
    head = NULL;
    list.insert(15,1);
    list.insert(17,1);
    list.insert(20,1);
    list.insert(30,2);
    list.print();
    return 0;
}
