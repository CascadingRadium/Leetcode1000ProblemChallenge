class Solution {
public:
    bool isPerfectSquare(int num) 
    {
        long long l=1,r=num;
        while(r-l>1)
        {
            long long mid=l+(r-l)/2;
            if(mid*mid<num)
                l=mid;
            else
                r=mid;
        }
        if(l*l==num||r*r==num)
            return true;
        return false;
        
    }
};