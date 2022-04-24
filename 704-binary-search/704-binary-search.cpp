class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        int l=0,r=nums.size()-1;
        while(r-l>-1)
        {
            int mid=l+(r-l)/2;
            if(nums[mid]<target)
                l=mid+1;
            else if(nums[mid]==target)
                return mid;
            else 
                r=mid-1;
        }
        return -1;
        
    }
};