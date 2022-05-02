class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) 
    {
        int sum=0;
        int count=0,cursum=0;
        vector<int> prefix(arr.size()+1);
        prefix[0]=0;
        for(int i=1;i<arr.size()+1;i++)
            prefix[i]=prefix[i-1]+arr[i-1];
        
        for(int i=0;i<arr.size();i++)
        {
            sum+=arr[i];
            for(int j=i+2;j<arr.size();j+=2)
            {
                sum+=prefix[j+1]-prefix[i];
            }
        }
        return sum;
        
    }
};