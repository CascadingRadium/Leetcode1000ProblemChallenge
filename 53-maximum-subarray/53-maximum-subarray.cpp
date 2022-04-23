class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        int max=INT_MIN;
        int tempmax=0;
        for(int i=0;i<nums.size();++i)
        {
            tempmax=std::max({nums[i],tempmax+nums[i]});
            max=std::max(max,tempmax);
        }
        return max;
    }
};