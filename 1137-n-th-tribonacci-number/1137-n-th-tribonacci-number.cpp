class Solution {
public:
    int tribonacci(int n) 
    {
        if(n==0) return 0;
        if(n==1) return 1;
        vector<int> vals(n+1);
        vals[0]=0;
        vals[1]=1;
        vals[2]=1;
        for(int i=3;i<=n;i++)
        {
            vals[i]=vals[i-1]+vals[i-2]+vals[i-3];
        }
        return vals[n];
        
    }
};