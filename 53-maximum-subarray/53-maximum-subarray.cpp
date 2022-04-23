class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        int max=nums[0];
        int tempmax=nums[0];
        for(int i=1;i<nums.size();++i)
        {
            tempmax=std::max({nums[i],tempmax+nums[i]});
            max=std::max(max,tempmax);
        }
        return max;
    }
};