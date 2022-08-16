class Solution {
public:
    
    bool valid(int sol,vector<int>&nums,int target)
    {
        int sum=accumulate(nums.begin(),nums.begin()+sol,0);
        if(sum>=target)
            return true;
        for(int i=1;i<=nums.size()-sol;i++)
        {
            sum-=nums[i-1];
            sum+=nums[i+sol-1];
            if(sum>=target)
                return true;
        }
        return false;
    }
    int minSubArrayLen(int target, vector<int>& nums) 
    {
        int l=0,r=nums.size();
        int test=accumulate(nums.begin(),nums.end(),0);
        if(test<target)
            return 0;
        while(r-l>1)
        {
            auto mid=l+(r-l)/2;
            if(valid(mid,nums,target))
                r=mid;
            else
                l=mid;
        }
        return r;
    }
};