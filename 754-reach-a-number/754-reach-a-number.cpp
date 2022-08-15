class Solution {
public:
    
    bool valid(long long sol, int target)
    {
        if(sol*(sol+1)/2 < target)
            return false;
        return true;
    }
    int reachNumber(int target) 
    {
        target =abs(target);
        int l=1;
        int r=target;
        while(l<r)
        {
            long long  mid=l+(r-l)/2;
            if(valid(mid,target))
                r=mid;
            else
                l=mid+1;
        }
        int diff =l * (l + 1) / 2 - target;
        if (diff % 2)
            l += l % 2 + 1;
        return l; 
    }
};