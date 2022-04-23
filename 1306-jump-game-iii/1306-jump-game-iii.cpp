class Solution {
public:
    bool canReach(vector<int>& nums, int k)
    {
        if(k<0||k>=nums.size()||nums[k]<0)
            return false;
        if(nums[k]==0)
            return true;
        nums[k]*=-1;
        if(canReach(nums,k+nums[k]) || canReach(nums,k-nums[k]))
            return true;
        return false;  
    }
};