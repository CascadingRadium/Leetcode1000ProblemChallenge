class Solution {
public:
    bool dfs(vector<bool>&visited,vector<int>&nums,int k)
    {
        if(k<0||k>=nums.size()||visited[k])
            return false;
        if(nums[k]==0)
            return true;
        visited[k]=true;
        if(dfs(visited,nums,k+nums[k]) || dfs(visited,nums,k-nums[k]))
            return true;
        return false;  
        
    }
    bool canReach(vector<int>& nums, int k)
    {
        vector<bool>visited(nums.size());
        return dfs(visited,nums,k);
    }
};