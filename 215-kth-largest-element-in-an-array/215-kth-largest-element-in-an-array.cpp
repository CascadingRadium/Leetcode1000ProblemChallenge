class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int L=nums.size()-k;
        nth_element(nums.begin(),nums.begin()+L,nums.end());
        return nums[L];
    }
};