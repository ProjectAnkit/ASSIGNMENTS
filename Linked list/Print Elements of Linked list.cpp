#include <iostream>

using namespace std;

struct node{
    int data;
    node *next;
};

node *head;

void insertattail(int x)
{
    if(head==NULL)
    {
        node *ptr = new node();
        ptr->data = x;
        ptr->next = NULL;
        head = ptr;
    }
    else
    {
        node *temp = new node();
        temp->data = x;
        temp->next = NULL;
        node *ptr = head;
        while (ptr->next!=NULL)
        {
            ptr = ptr->next;   
        }
        ptr->next = temp;
    }
}

void print()
{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main()
{
    head=NULL;
    insertattail(5);
    insertattail(6);
    insertattail(7);
    insertattail(8);
    print();
    return 0;
}
