#include <bits/stdc++.h>
using namespace std;

//a function that will print the vector passed to it, elements seprated by space
void printVector(vector<int>A)
{
	//traverse all the element and print them
	for(int i=0;i<A.size();i++)
	{
		cout<<A[i]<<" ";	
	}
	cout<<"\n";
}

//the vector A will be sorted inplace and that's why passed with refrence
void sort(vector<int>&A)
{
	int V[A.size()]; //for storing count/for pushing counted numbers
	vector<int>N; // for storing sorted vector
    int count,z,index= 0;
	int num = 1;
	while(num<=8)
	{
		count = 0;
		z = 0;
		while(count<(sizeof(A)))
		{
		if(num == A[count])
		{
		    ++z;
		}
		count++;
	    }
        V[index] = z;
	    num++;
	    index++;
	}
	int n = 0;
	int cnt = 0;
	while(n<(A.size()))
	{
		if(V[cnt]==0)
		{
			cnt++;
		}
		else
		{
		while(V[cnt]!=0)
		{
			N.push_back(cnt+1);
			--V[cnt];
			n++;
		}
		}
	}
	for(int i=0;i<N.size();i++)
	{
		A[i] = N[i];
	}
}

int main() {
	vector<int>A= {6,1,2,3,4,6,1,5,3,4,8};
	// your code goes here
	sort(A);
	cout<<"sorted vector: ";
	printVector(A);
	
	return 0;
}
