class Solution {
public:
    int search(vector<int>& nums, int target) 
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
        cout<<l<<' '<<r<<'\n';
        if(nums[l]>nums[r])
        {
            if(target>nums[l])
                return -1;
            else if(target<nums[0])
            {
                l=l+1;
                r=nums.size()-1;
            }
            else
            {
                r=r-1;
                l=0;
            }
        }
        else
        {
            l=0;
            r=nums.size()-1;
        }
        while(r-l>1)
        {
            int mid=l+(r-l)/2;
            if(nums[mid]<target)
                l=mid;
            else
                r=mid;
        }
        cout<<l<<' '<<r<<'\n';
        if(nums[l]==target)
            return l;
        else if(nums[r]==target)
            return r;
        return -1;
    }
};