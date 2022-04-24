class Solution {
public:
    int mySqrt(int x) 
    {
        long long l=0,r=x;
        while(r-l>1)
        {
            long long mid=(l+(r-l)/2);
            if(mid*mid<x)
                l=mid;
            else
                r=mid;
        }
        if(r*r==x)
            return r;
        return l;
        
    }
};