class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        if(nums.size()==0)
            return vector<int>{-1,-1};
        int u=upper_bound(nums.begin(),nums.end(),target)-1-nums.begin();
        int l=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        if(l>u)
        {
            l=-1;
            u=-1;
        }
        return(vector<int>{l,u});
    }
};