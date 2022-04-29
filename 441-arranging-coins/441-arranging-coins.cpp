class Solution {
public:
    int arrangeCoins(int n) 
    {
        int ret=0;
        long long k=1;
        int diff=2;
        while(n>=k)
        {
            ret++;
            k+=diff;
            diff+=1;
        }
        return ret;
    }
};