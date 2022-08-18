class Solution
{
    public:
    int lengthOfLIS(vector<int>& nums) 
    {
        vector<int> dp;
        dp.push_back(nums[0]);
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>dp.back())
                dp.push_back(nums[i]);
            else if(nums[i]<dp.back())
            {
                auto ptr=lower_bound(dp.begin(),dp.end(),nums[i]);
                *(ptr)=nums[i];
            }
        }
        return dp.size();
    }
};