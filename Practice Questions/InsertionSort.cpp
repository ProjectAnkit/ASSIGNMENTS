#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int A[n];
	
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	
	int a=0;
	int b = 1;
	while(b<(sizeof(A)/sizeof(int)))
	{
		if(A[a]<A[b])
		{
		a++;
		b++;
		}
		else if(A[a]>A[b])
		{
			swap(A[a],A[b]);
			a = 0;
			b = 1;
		}
	}
	
	for(int i=0;i<n;i++)
	{
		cout<<A[i]<<" ";
	}
	return 0;
}
