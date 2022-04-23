class Solution {
public:
    bool isPalindrome(int x) 
    {
        long long y=0;
        int control=x;
        while(x>0)
        {
            y+=x%10;
            y*=10;
            x/=10;
        }
        y/=10;
        return y==control;
    }
};