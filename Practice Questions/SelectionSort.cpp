#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    int n;
    cin>>n;
    int A[n];
    
    //input of values
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    
    int count;
    int min;
    int run = 0;
    while(run<(sizeof(A)/sizeof(int)))
    {
        count = run;
        min  = run;
    while(count<(sizeof(A)/sizeof(int)))
    {
        if(A[count]<=A[min])
        {
            min = count;
        }
        count++;
    }
    swap(A[run],A[min]);
    run++;
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    return 0;
}
