class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) 
    {
        int M=obstacleGrid.size();
        int N=obstacleGrid[0].size();
        vector<vector<int>> table(M,vector<int>(N));
        for(int i=0;i<M;i++)
        {
            if(obstacleGrid[i][0]==0)
                table[i][0]=1;
            else
                break;
        }
        for(int i=0;i<N;i++)
        {
            if(obstacleGrid[0][i]==0)
                table[0][i]=1;
            else
                break;
        }
        for(int i=1;i<M;i++)
        {
            for(int j=1;j<N;j++)
            {
                if(obstacleGrid[i][j]==0)
                    table[i][j]=table[i-1][j]+table[i][j-1];
            }
        }
        return table[M-1][N-1];
    }
};