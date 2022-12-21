class Solution {
public:
    int firstBadVersion(int n) {

        long int start = 1;
        long int end = n;
        long int mid,flag=1;

        while(start<end)
        {    
            if(isBadVersion(end)==1)
            {
               mid=end-1;
               if(isBadVersion(mid)==1)
               {
                   end = (start+end)/2;
               } 
               else
               {
                   start = end;
                   flag = end;
               }
            }
            else if(isBadVersion(end)==0)
            {
                start = end;
                end = n;
            }
        }
        return flag;
    }
};
