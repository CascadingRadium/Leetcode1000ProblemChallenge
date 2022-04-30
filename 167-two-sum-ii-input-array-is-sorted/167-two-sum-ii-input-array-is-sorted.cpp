class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
        int n=numbers.size();
        vector<int> ret(2);
        for(int i=1;i<n+1;i++)
        {
            int x=numbers[i-1];
            int l=i+1,r=n;
            while(r-l>1)
            {
                int mid=l+(r-l)/2;
                if(numbers[mid-1]+x>target)
                    r=mid;
                else
                    l=mid;
            }
            if(numbers[l-1]+x==target)
            {
                ret[0]=i;
                ret[1]=l;
                break;
            }
            else if(numbers[r-1]+x==target)
            {
                ret[0]=i;
                ret[1]=r;
                break;
            }
        }
        return ret;
        
    }
};