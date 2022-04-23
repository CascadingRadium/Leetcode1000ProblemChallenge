class Solution {
public:
    bool canJump(vector<int>& nums) 
    {
        int n=nums.size();
        vector<bool> canreach(n);
        canreach[n-1]=true;
        for(int i=n-2;i>=0;--i)
        {
            for(int jmp=1;jmp<=nums[i];jmp++)
            {
                if(i+jmp<n&&canreach[i+jmp])
                {
                    canreach[i]=true;
                    break;
                }
            }
        }
        return canreach[0];
        
        
        
    }
};