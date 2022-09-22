#include <iostream>
using namespace std;
const int N=100;

//countNumberOfTimesTargetIsInDiagonal containing row, col
int countNumberOfTimesTargetIsInDiagonal(int n, int A[][N], int row, int col, int target){
	int i,j;
	int ans=0;
	for (i=row-1,j=col-1;i>=0 && j>=0  ;--i,--j)
	{
	    if(A[i][j]==target)
	    {
	    ans++; 
	    }
	}
	
	for (i=row+1,j=col-1;i<n && j>=0 ;i++,--j)
	{
	     if(A[i][j]==target)
	    {
	    ans++;
	    }
	}
	
	for (i=row-1,j=col+1; i>=0 && j<n ;--i,j++)
	{
	     if(A[i][j]==target)
	    {
	    ans++;
	    }
	}
	
	for (i=row+1,j=col+1; i<n && j<n ;i++,j++)
	{
	   if(A[i][j]==target)
	    {
	    ans++;
	    }
	}
	return ans;
}

int main() {
	int n;
	cin>>n;
	int A[N][N];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>A[i][j];
		}
	}
	cout<<"Ans: "<<countNumberOfTimesTargetIsInDiagonal(n, A, 1, 2, 2)<<"\n";
	return 0;
}
