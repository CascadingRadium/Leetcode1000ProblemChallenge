class Solution {
public:
    void backtrack(vector<int>&nums, int curpos, bool &flag, vector<bool>&visited)
    {
        if(curpos<0||curpos>=nums.size())
            return;
        if(nums[curpos]==0)
            flag=true;
        if(visited[curpos])
            return;
        else
        {
            if(nums[curpos]==0)
                return;
            visited[curpos]=true;
            backtrack(nums,nums[curpos]+curpos,flag,visited);
            if(flag)
                return;
            backtrack(nums,curpos-nums[curpos],flag,visited);
        }
    }
    
    bool canReach(vector<int>& nums, int k)
    {
        bool flag=false;
        vector<bool>visited(nums.size());
        backtrack(nums,k,flag,visited);
        return flag;     
    }
};