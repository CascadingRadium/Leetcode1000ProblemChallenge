class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int min=prices[0];
        int curprof=0;
        for(int i=1;i<prices.size();i++)
        {
            int t=prices[i]-min;
            if(t>curprof)
                curprof=t;
            if(min>prices[i])
                min=prices[i];
        }
        return curprof;
        
    }
};