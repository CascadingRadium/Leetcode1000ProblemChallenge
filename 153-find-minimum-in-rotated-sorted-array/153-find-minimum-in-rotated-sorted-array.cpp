class Solution {
public:
    int findMin(vector<int>& nums) 
    {
        int l=0,r=nums.size()-1;
        while(r-l>1)
        {
            int mid=l+(r-l)/2;
            if(nums[mid]<nums[0])
                r=mid;
            else
                l=mid;
        }
        int ret=0;
        cout<<l<<' '<<r<<'\n';
        if(nums[l]>nums[r])
        {
            ret=nums[r];
        }
        else
        {
            ret=nums[0];
        }
        return ret;
        
    }
};