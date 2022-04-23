class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) 
    {
        vector<vector<int>> ret;
        vector<int> control=nums;
        ret.push_back(control);
        next_permutation(nums.begin(),nums.end());
        while(control!=nums)
        {
            ret.push_back(nums);
            next_permutation(nums.begin(),nums.end());
        }
        return ret;
        
    }
};