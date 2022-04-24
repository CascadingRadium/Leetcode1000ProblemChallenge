class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        int l=0,r=nums.size()-1;
        while(r-l>1)
        {
            int mid=l+(r-l)/2;
            if(nums[mid]<target)
                l=mid;
            else 
                r=mid;
        }
        cout<<l<<' '<<nums[l]<<'\n';
        cout<<r<<' '<<nums[r]<<'\n';
        if(nums[r]==target)
            return r;
        if(nums[l]==target)
            return l;
        return -1;
        
    }
};