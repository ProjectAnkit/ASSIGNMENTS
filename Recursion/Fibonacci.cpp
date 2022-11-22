#include <bits/stdc++.h>

using namespace std;

int fibo(int i)
{

   if(i == 0)
   {
       return 0;
   }
   else if(i == 1)
   {
       return 1;
   }
   else
   {
       return (fibo(i-1) + fibo(i-2));
   }
}

int main()
{
    int i,r;
    cout<<"Enter fibonacci size :";
    cin>>r;
    for(i=0;i<r;i++)
    {
        cout<<fibo(i)<<" ";
    }
    return 0;
}
