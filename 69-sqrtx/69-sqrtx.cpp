class Solution {
public:
    int mySqrt(int x) 
    {
        if(x<2)
            return x;
        long long l=0,r=x;
        int root;
        while(r-l>1)
        {
            cout<<l<<' '<<r<<'\n';
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