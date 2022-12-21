class Solution {
public:
    int mySqrt(int x) {

        long int sq = x;
        long int i = 1;
        
        while(sq>=(i*i))
        {
            i++;
        }
      return i-1;  
    }
};
