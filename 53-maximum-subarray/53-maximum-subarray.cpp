class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        int maxD=nums[0];
        int tempmax=nums[0];
        for(int i=1;i<nums.size();++i)
        {
            tempmax=max({nums[i],tempmax+nums[i]});
            maxD=max(maxD,tempmax);
        }
        return maxD;
    }
};