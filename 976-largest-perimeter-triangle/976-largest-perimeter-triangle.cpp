class Solution {
public:
    int largestPerimeter(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end(),greater<int>());
        bool isnottriangle=true;
        int start=0;
        int ret=0;
        while(start+2!=nums.size())
        {
            int a = nums[start];
            int b = nums[start+1];
            int c = nums[start+2];
            if(a+b>c && b+c>a && c+a>b)
            {
                ret=a+b+c;
                break;
            }
            start++;
        }
        return ret;
        
    }
};