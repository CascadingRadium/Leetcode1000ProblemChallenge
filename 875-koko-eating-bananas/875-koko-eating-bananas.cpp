class Solution 
{
public:
    
    bool fun(int val, vector<int>&piles,int h)
    {
        int test=val-1;
        if(test==0)
            return false;
        int x=0;
        for(int i=0;i<piles.size();i++)
        {
            x+=piles[i]/test;
            if(piles[i]%test>0)
                x++;
        }
        if(x<=h)
            return true;
        return false;
    }
    int minEatingSpeed(vector<int>& piles, int h) 
    {
        int l=0;
        int r=*(max_element(piles.begin(),piles.end()));
        while((r-l)>1)
        {
            auto mid=(r-l)/2+l;
            if(fun(mid,piles,h))
                r=mid;
            else
                l=mid;
        }
        if(!fun(l,piles,h)&& fun(r,piles,h))
            return l;
        if(!fun(r,piles,h) && fun(r+1,piles,h))
            return r;
        return r+1;
        
    }
};