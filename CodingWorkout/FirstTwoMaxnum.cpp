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
    int max1 = A[0];
    int max2 = A[0];
    for(int i=0;i<n;i++)
    {
        if(max1<A[i])
         {
            max1 = A[i];
         }
         
        if(max2<A[i])
        {
            if(A[i]!=max1)
            {
                max2 = A[i];
            }
        }
    }
    cout<<max1<<" "<<max2;
  return 0;
}
