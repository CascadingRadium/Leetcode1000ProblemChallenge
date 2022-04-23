class Solution {
public:
    bool canJump(vector<int>& nums) 
    {
        int n=nums.size();
        int reqjump=0;
        for(int i=n-2;i>=0;--i)
        {
            reqjump++;
            if(nums[i]>=reqjump)
                reqjump=0;
        }
        return reqjump==0;
        
        
        
    }
};