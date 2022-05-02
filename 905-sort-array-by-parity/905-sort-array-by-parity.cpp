class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) 
    {
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if((nums[i]&1)==1)
            {
                nums.push_back(nums[i]);
                nums.erase(nums.begin()+i);
                i--;
                n--;
            }
        }
        return nums;
        
    }
};