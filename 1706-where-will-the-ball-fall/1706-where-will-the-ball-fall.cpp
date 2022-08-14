class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) 
    {
        int m,n;
        m=grid.size();
        n=grid[0].size();
        vector<vector<int>> dp(m+1,vector<int>(n,-1));
        for(int i=0;i<n;i++)
            dp[0][i]=i;
        for(int i=1;i<m+1;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(j==0)
                {
                    if(j+1!=n&&grid[i-1][j]==-1&&grid[i-1][j+1]==-1) //Right Corner
                        dp[i][j]=dp[i-1][j+1];
                }
                else if(j==n-1)
                {
                    if(j-1!=-1&&grid[i-1][j]==1 && grid[i-1][j-1]==1) //Left Corner
                        dp[i][j]=dp[i-1][j-1];
                }
                else
                {
                    if(grid[i-1][j]==-1&&grid[i-1][j+1]==-1) //Right Corner
                        dp[i][j]=dp[i-1][j+1];
                    else if(grid[i-1][j]==1 && grid[i-1][j-1]==1) //Left Corner
                        dp[i][j]=dp[i-1][j-1];
                        
                }
                
            }
        }
        // for(auto i:dp)
        // {
        //     for(auto j:i)
        //         cout<<j<<' ';
        //     cout<<'\n';
        // }
        vector<int> ret(n,-1);
        vector<int> &g=dp[m];
        for(int i=0;i<n;i++)
        {
            if(g[i]!=-1)
                ret[g[i]]=i;
        }
        return ret;
        
    }
};