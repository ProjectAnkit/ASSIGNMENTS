#include <stdio.h>

int main()
{
    int m ;
    int n[m];
    float x=0, y=0 , z=0 ;
    int i;
    scanf("%d",&m);
    for(i=0;i<=m-1;i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=0;i<=(m-1);i++)
    {
        if(n[i]>0)
        {
           x++; 
        }
        else if(n[i]<0)
        {
            y++;
        
        }
        else if(n[i]==0)
        {
            z++;
        }
    }
    printf("%f\n%f\n%f",x/6,y/6,z/6);
}