#include <bits/stdc++.h>
using namespace std;


void Sort(int A[],int start,int mid,int end)
{
	int num = start;
	int mid1 = mid+1;
	int N[end-start+1];
	int i=0;
	while(num<=mid && mid1<=end)
	{
		if(A[num]<A[mid1])
		{
			N[i] = A[num];
			i++;
			num++;
		}
		else 
		{
			N[i] = A[mid1];
			i++;
			mid1++;
		}
	}
	
	while(num<=mid)
	{
		N[i] = A[num];
		i++;
		num++;
	}
	
	while(mid1<=end)
	{
		N[i] = A[mid1];
		i++;
		mid1++;
	}
	
	for(int j=0;j<i;j++)
	{
		A[start+j] = N[j];
	}
}

void MergeSort(int A[],int start,int end)
{
	if(start==end)
	{
		return;
	}
	int mid  = (start+end)/2;
	
	MergeSort(A,start,mid);
	MergeSort(A,mid+1,end);
	Sort(A,start,mid,end);
}

int main()
{
	int n;
	cin>>n;
	int A[n];
	
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	
	int start = 0;
	int end = n-1;
	
	MergeSort(A,start,end);
	
	for(int i=0;i<n;i++)
	{
		cout<<A[i]<<" ";
	}
	return 0;
}
