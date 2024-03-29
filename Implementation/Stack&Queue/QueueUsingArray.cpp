#include <iostream>
using namespace std;

//complete the functions
class Queue{
	int A[100000];
	int start;
	int end;
	
	public:
	//constructor is called whenever an object of the class is declared
	Queue(){
		cout<<"constructor is Called\n";
		start=0;
		end=-1;
	}
	
	//push the value at the back
	void push(int val){
	    end++;
	    A[end] = val;
		cout<<"pushing the val: "<<val<<" at the back of queue\n";
	}
	
	int front(){
		cout<<"returning the value at front\n";
		return A[start];
	}
	
	void pop(){
	    if(end == 0)
	    {
	        A[0] = 0;
	    }
	    else
	    {
	    for(int i=0;i<=end;i++)
	       {
	           A[i] = A[i+1];
	       }
	    }
	    --end;
		cout<<"removing the first element\n";
	}
	
	int size(){
		cout<<"return the size of the queue\n";
		return (end+1);
	}
	
	bool isEmpty(){
		cout<<"returning if the queue is empty\n";
		if(end == -1)
		return true;
	}
};

int main() {
	Queue q; //constructor is called on this line
	q.push(4);
	cout<<"front: "<<q.front()<<"\n";
	q.pop();
	cout<<"size: "<<q.size()<<"\n";
	cout<<"empty: "<<q.isEmpty()<<"\n";
	
	q.push(5);
	q.push(3);
	cout<<"front: "<<q.front()<<"\n";
	q.pop();
	cout<<"size: "<<q.size()<<"\n";
	cout<<"empty: "<<q.isEmpty()<<"\n";
	
	cout<<"front: "<<q.front()<<"\n";
	q.pop();
	cout<<"size: "<<q.size()<<"\n";
	cout<<"empty: "<<q.isEmpty()<<"\n";
	return 0;
}
