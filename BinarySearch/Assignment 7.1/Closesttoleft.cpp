
#include <bits/stdc++.h>
using namespace std;
#define int long long


signed findingindex(vector<int>A,int target)
{
    int start = 0;
    int end = A.size()-1;
    int mid,flag=0;
    int front;

    while (start<end)
    {
        mid = (start+end+1)/2;
        if(A[0]>target)
        {
            return flag;
            start = end;
        }
        else if(A[end]<=target)
        {
            flag = end;
            return flag+1;
            start = end;
        }
        else if(A[mid]<target)
        {
            front = mid+1;
            if(A[front]<target)
            {
                start = mid+1;
            }
            else if(A[front]>target)
            {
                flag = mid;
                return flag+1;
                start = end;
            }
            else if(A[front]==A[mid])
            {
                start++;
            }
            else if(A[front]==target)
            {
                start++;
            }
        }
        else if(A[mid]>target)
        {
            end = mid-1;
        }
        else if(A[mid]==target)
        {
            front = mid+1;
            if(A[front]==A[mid])
            {
                start++;
            }
            else if(A[front]>target)
            {
                flag = mid;
                return flag+1;
                start = end;
            }
        }
    }
    flag = mid;
    return flag;
}


void solve(){
    int n,k,a;
    int p=0;
    cin>>n>>k;
    vector<int>A(n);
    vector<int>T(k);
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    for(int i=0;i<k;i++)
    {
        cin>>T[i];
    }
    while(k>0)
    {
        a = T[p];
        cout<<findingindex(A,a)<<endl;
        --k;
        p++;
    }
}

signed main()
{
    solve();
}
