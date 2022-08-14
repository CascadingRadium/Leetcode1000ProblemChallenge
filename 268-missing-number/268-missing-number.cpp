class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        int n=nums.size();
        int b=accumulate(nums.begin(),nums.end(),0);
        int a=(n*(n+1)/2);
        return a-b;
    }
};