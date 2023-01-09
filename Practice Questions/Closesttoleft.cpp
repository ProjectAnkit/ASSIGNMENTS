#include <bits/stdc++.h>

using namespace std;

int Closesttoleft(int A[],int target,int n)
{
	int start = 0;
	int end = n-1;
	int mid=0;
	int front;
	
	while(start!=end)
	{
		
		mid = (start+end+1)/2;
		
		if(A[0]>target)
		{
			return 0;
			start = end;
		}
		else if(A[end]<target)
		{
		    return end+1;
		    start = end;
		}
		else if(A[mid]>target)
		{
			end = mid-1;
		}
		
		else if(A[mid]<target)
		{
			start= mid+1;
		}
		
		else if(A[mid]==target)
		{
			front = mid+1;
			if(A[front]==target)
			{
				start = mid;
			}
			else if(A[front]>target)
			{
				return mid+1;
				start = end;
			}
		}
	}
	return mid;
}

int main()
{
	int n,m,data,target,t=0;
	cin>>n>>m;
	int A[n];
	int T[m];
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	for(int i=0;i<m;i++)
	{
		cin>>T[i];
	}
	
	while(m>0)
	{
		target = T[t];
		
		cout<<Closesttoleft(A,target,n)<<" ";
		t++;
		--m;
	}
	return 0;
}
