class Solution {
public:
    bool isPalindrome(int x) 
    {
        if(x<0)
            return false;
        long long y=0;
        int control=x;
        while(x!=0)
        {
            int r=x%10;
            y=y*10+r;
            x/=10;
        }
        return y==control;
    }
};