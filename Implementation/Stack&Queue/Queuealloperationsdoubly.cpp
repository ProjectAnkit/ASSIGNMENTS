#include <iostream>
using namespace std;

class deque
{
	private:
	    int data;
	    deque *next;
	    deque *prev;
	public:
	    void pushathead(int x);
	    void pushattail(int x);
	    void popathead();
	    void popattail();
	    void print();
};

deque *head;

void deque::pushattail(int x)
{
    deque *temp = new deque();
    temp->data = x;
    temp->next = NULL;
    if(head == NULL)
    {
    	head = temp;
    	head->prev = NULL;
    }
    else 
    {
      deque *temp1 = head;
      while(temp1->next!=NULL)
      {
          temp1 = temp1->next;
      }
      temp1->next = temp;
      temp->prev = temp1;
    }
}

void deque::pushathead(int x)
{
    deque *temp = new deque();
    temp->data = x;
    
    if(head==NULL)
    {
        head = temp;
    }
    else
    {
    temp->next = head;
    head->prev = temp;
    head = temp;
    }

}

void deque::popathead()
{
    head = head->next;
    head->prev = NULL;
}

void deque::popattail()
{
    deque *temp = head;
    while(temp->next->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = NULL;
    free(temp->next);
}


void deque::print()
{
	deque *temp = head;
	while (temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp = temp->next;
	}
}

int main() {
	deque list;
    int c,data;
    while(1)
    {
	cout<<"\n1. Push at head "<<endl;
	cout<<"2. Push at tail "<<endl;
	cout<<"3. Pop at head "<<endl;
	cout<<"4. Pop at tail "<<endl;
	cout<<"5. Print "<<endl;
	cout<<"6. Exit "<<endl;
	cin>>c;
	switch(c)
	{
		case 1:{
			cout<<" Enter the data you want to push :";
			cin>>data;
			list.pushathead(data);
		}
		break;
		
		case 2:{
			cout<<" Enter the data you want to push :";
			cin>>data;
			list.pushattail(data);
		}
		break;
		
		case 3:{
			list.popathead();
			cout<<"data is popped from head !"<<endl;
		}
		break;
		
		case 4:{
			list.popattail();
			cout<<"data is popped from tail !"<<endl;
		}
		break;
		
		case 5: {
			list.print();
			cout<<"\n";
		}
		break;
		case 6: {
			exit(1);
		}
		break;
		default : {
			cout<<"Error";
		}
		break;
	}
    }
	return 0;
}
