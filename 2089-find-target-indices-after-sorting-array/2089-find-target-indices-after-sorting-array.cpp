class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) 
    {
        sort(nums.begin(),nums.end());
        vector<int> ret;
        int l=0,r=nums.size()-1;
        int lb,rb;
        while(r-l>1)
        {
            int mid=l+(r-l)/2;
            if(nums[mid]<target)
                l=mid+1;
            else
                r=mid;
        }
        if(nums[l]==target)
            lb=l;
        else if(nums[r]==target)
            lb=r;
        else
            return ret;
        r=nums.size()-1;
        l=0;
        while(r-l>1)
        {
            int mid=l+(r-l)/2;
            if(nums[mid]>target)
                r=mid-1;
            else
                l=mid;
        }
        if(nums[r]==target)
            rb=r;
        else
            rb=l;
        for(int i=lb;i<=rb;i++)
            ret.push_back(i);
        return ret;
    }
};