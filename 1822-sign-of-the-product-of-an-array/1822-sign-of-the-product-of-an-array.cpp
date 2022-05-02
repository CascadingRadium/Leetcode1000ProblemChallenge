class Solution {
public:
    int arraySign(vector<int>& nums) {
        int cnt=0;
        for(auto i:nums)
        {
            if(i<0)
                ++cnt;
            else if(i==0)
                return 0;
        }
        return cnt&1==1?-1:1;
        
    }
};