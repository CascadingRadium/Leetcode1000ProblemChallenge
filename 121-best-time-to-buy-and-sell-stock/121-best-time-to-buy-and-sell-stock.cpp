class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int min=prices[0];
        int curprof=0;
        for(int i=1;i<prices.size();i++)
        {
            if(prices[i]-min>curprof)
                curprof=prices[i]-min;
            min=std::min(min,prices[i]);
        }
        return curprof;
        
    }
};