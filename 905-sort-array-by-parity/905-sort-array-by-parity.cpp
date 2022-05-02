class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) 
    {
        vector<int> ret(nums.size());
        vector<int> odd;
        int retindex=0;
        for(int i=0;i<nums.size();i++)
        {
            if((nums[i]&1)==1)
                odd.push_back(nums[i]);
            else
                ret[retindex++]=nums[i];
        }
        for(auto i:odd)
            ret[retindex++]=i;
        return ret;
        
    }
};