class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) 
    {
        long long sum=accumulate(chalk.begin(),chalk.end(),0LL);
        long long p=k%sum;
        int ret=0;
        for(int i=0;i<chalk.size();i++)
        {
            p-=chalk[i];
            if(p<0)
            {
                ret=i;
                break;
            }                
        }
        return ret;
    }
};