#include <bits/stdc++.h>
using namespace std;
#define int long long
 
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
    int i=0;
    int j=1;
    int end = A.size()-1;
    
    while(j<=end)
    {
    	if(A[i]<=A[j])
    	{
    		i++;
    		j++;
    	}
    	else if(A[i]>A[j])
    	{
    		swap(A[i],A[j]);
    		i=0;
    		j=1;
    	}
    }
}
 
signed main() {
	vector<int>A= {6,1,2,3,4,6,1};
	// your code goes here
	sort(A);
	cout<<"sorted vector: ";
	printVector(A);
 
	return 0;
}
