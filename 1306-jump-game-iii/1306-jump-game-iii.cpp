class Solution {
public:
    bool dfs(vector<int>&nums,int k)
    {
        if(k<0||k>=nums.size()||nums[k]<0)
            return false;
        if(nums[k]==0)
            return true;
        nums[k]*=-1;
        if(dfs(nums,k+nums[k]) || dfs(nums,k-nums[k]))
            return true;
        return false;  
        
    }
    bool canReach(vector<int>& nums, int k)
    {
        return dfs(nums,k);
    }
};