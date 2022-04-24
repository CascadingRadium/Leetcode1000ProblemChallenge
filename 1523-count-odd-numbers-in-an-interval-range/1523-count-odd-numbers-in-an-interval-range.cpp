class Solution {
public:
    int countOdds(int low, int high) 
    {
        int x=high-low;
        int ret= x/2;
        if(low%2!=0||high%2!=0)
            ret++;
        return ret;
        
    }
};