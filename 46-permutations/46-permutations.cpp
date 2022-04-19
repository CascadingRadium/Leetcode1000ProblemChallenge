class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) 
    {
        vector<vector<int>> ret;
        vector<int> x=nums;
        next_permutation(nums.begin(),nums.end());
        while(nums!=x)
        {
            ret.push_back(nums);
             next_permutation(nums.begin(),nums.end());
        }
        ret.push_back(x);
        return ret;
        
    }
};