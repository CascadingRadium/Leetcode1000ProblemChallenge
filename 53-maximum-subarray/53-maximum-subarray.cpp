class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        int max=INT_MIN;
        int tempmax=0;
        for(int i=0;i<nums.size();++i)
        {
            tempmax=tempmax+nums[i];
            if(tempmax>max)
                max=tempmax;
            if(tempmax<0)
                tempmax=0;
        }
        return max;
    }
};