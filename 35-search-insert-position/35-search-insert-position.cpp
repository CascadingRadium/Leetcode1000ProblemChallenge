class Solution {
public:
    int searchInsert(vector<int>& nums, int target) 
    {
        int n=nums.size();
        int l=0,r=n-1;
        while(r-l>1)
        {
            int mid=l+(r-l)/2;
            if(nums[mid]<target)
                l=mid;
            else
                r=mid;
        }
        if(target>nums[r])
            return n;
        if(target<nums[l])
            return 0;
        if(nums[l]==target)
            return l;
        return r;
    }
};