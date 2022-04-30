class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) 
    {
        int ret=0,sum=0;
        for(auto i:accounts)
        {
            sum=0;
            for(auto j:i)
            {
                sum+=j;
            }
            ret=max(ret,sum);
        }
        return ret;
    }
};