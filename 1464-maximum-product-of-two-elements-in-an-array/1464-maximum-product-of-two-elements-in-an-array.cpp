class Solution {
public:
    int maxProduct(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        return (*(nums.end()-1)-1)*(*(nums.end()-2)-1);
        
        
    }
};