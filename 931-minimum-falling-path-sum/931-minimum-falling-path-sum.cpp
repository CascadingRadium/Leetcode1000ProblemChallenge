class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) 
    {
        int M = matrix.size();
        int N = matrix[0].size();
        vector<vector<int>> dp(M,vector<int>(N));
        for(int i=0;i<N;i++)
            dp[M-1][i]=matrix[M-1][i];
        for(int i=M-2;i>=0;i--)
        {
            dp[i][0]=min({dp[i+1][0],dp[i+1][1]})+matrix[i][0];
            for(int j=1;j<N-1;j++)
            {
                dp[i][j]=min({dp[i+1][j-1], dp[i+1][j], dp[i+1][j+1]})+matrix[i][j];
            }
            dp[i][N-1]=min({dp[i+1][N-1],dp[i+1][N-2]})+matrix[i][N-1];
        }
        int ret=dp[0][0];
        for(int i=1;i<N;i++)
            ret=min(ret,dp[0][i]);
        return ret;
    }
};