#include <bits/stdc++.h>
#define max 10
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
	
	int N[max];
	int count = 1;
	
	while(count<=max)
	{
	   int y = 0;
	   int z = 0;
	   while(y<n)
	   {
	   	if(count==A[y])
	   	{
	   	   z++;
	   	}
	   	   y++;
	   }
	N[count-1] = z;
	count++;
	}
    
    count = 0;
    int V[n];
    int z = 0;
    while(count < max)
    {
    	while(N[count]!=0)
    	{
    		V[z] = count+1;
    		--N[count];
    		z++;
    	}
    	count++;
    }
    
    for(int i=0;i<n;i++)
    {
    	cout<<V[i]<<" ";
    }
    return 0;
}
