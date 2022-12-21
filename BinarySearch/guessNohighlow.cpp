class Solution {
public:
    int guessNumber(int n) {
        long int start = 1;
        long int num = n;
        long int end = n;
        
        while(guess(num)!=0)
        {
        if(guess(num)==1)
        {
            start = num;
            num = (start+end)/2;
        }
        else if(guess(num)==-1)
        {
            end = num;
            num = (start+end)/2;
        }
        }
        return num;
    }
};
