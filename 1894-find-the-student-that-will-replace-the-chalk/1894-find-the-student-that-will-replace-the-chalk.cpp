class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) 
    {
        vector<long long> prefixSum(chalk.size());
        prefixSum[0]=chalk[0];
        for(int i=1;i<chalk.size();i++)
            prefixSum[i]=prefixSum[i-1]+chalk[i];
        long long p=k%prefixSum[chalk.size()-1];
        auto ptr=upper_bound(prefixSum.begin(),prefixSum.end(),p);
        return ptr-prefixSum.begin();
        
    }
};