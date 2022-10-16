#include <iostream>

using namespace std;

class node
{
    private:
       int data;
       node *next;
    public:
       void insert (int x);
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
    int size,number;
    cout<<"Enter size :";
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cout<<"\n\nEnter number :";
        cin>>number;
        list.insert(number);
        list.print();
    }
    return 0;
}
