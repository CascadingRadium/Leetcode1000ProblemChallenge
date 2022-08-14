class Solution {
public:
    int maxProduct(vector<int>& nums) 
    {
        int N=nums.size();
        int m1=0,m2=0;
        for(int i=0;i<N;i++)
        {
            if(nums[i]>m1)
            {
                m2=m1;
                m1=nums[i];
            }
            else if(nums[i]>m2 && nums[i]<=m1)
                m2=nums[i];
        }
        return (m1-1)*(m2-1);
        
        
    }
};