class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        int b=accumulate(nums.begin(),nums.end(),0);
        int a=(nums.size()*(nums.size()+1)/2);
        return a-b;
    }
};