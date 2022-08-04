class Solution {
public:
    int countVowelStrings(int n) 
    {
        vector<int> arr={1,1,1,1,1};
        vector<int> prefixSum(5);
        for(int i=0;i<n;i++)
        {
            prefixSum[4]=arr[4];
            for(int j=3;j>=0;j--)
            {
                prefixSum[j]=arr[j]+prefixSum[j+1];
            }
            arr.swap(prefixSum);
        }
        return arr[0];
        
    }
};