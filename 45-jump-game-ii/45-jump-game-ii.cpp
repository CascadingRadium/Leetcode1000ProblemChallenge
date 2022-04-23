class Solution {
public:
    int jump(vector<int>& nums) 
    {
        vector<int> row(nums.size());
        int n=nums.size();
        row[n-1]=0;
        int minjmp=INT_MAX;
        for(int i=n-2;i>=0;i--)
        {
            minjmp=INT_MAX;
            for(int jmp=1;jmp<=nums[i];jmp++)
            {
                if(i+jmp<n)
                    minjmp=min(row[i+jmp],minjmp);
            }
            minjmp==INT_MAX?row[i]=INT_MAX:row[i]=minjmp+1;
        }
        return row[0];
    }
};