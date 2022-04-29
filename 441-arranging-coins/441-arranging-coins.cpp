class Solution {
public:
    int arrangeCoins(int n) 
    {
        long long l=1,r=n;
        while(r-l>1)
        {
            long long mid=l+(r-l)/2;
            if((mid*(mid+1))/2<n)
                l=mid;
            else
                r=mid;
        }
        if((r*(r+1))/2<=n)
            return r;
        return l;
    }
};
