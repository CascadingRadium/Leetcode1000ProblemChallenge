class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) 
    {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>> table(m,vector<int>(n,0));
        table[0][0]=grid[0][0];
        for(int i=1;i<n;i++)
        {
            table[0][i]=table[0][i-1]+grid[0][i];
        }
        for(int i=1;i<m;i++)
        {
            table[i][0]=table[i-1][0]+grid[i][0];
        }
        for(int i=1;i<m;i++)
        {
            for(int j=1;j<n;j++)
            {
                table[i][j]=min(table[i-1][j],table[i][j-1])+grid[i][j];
            }
        }
        return table[m-1][n-1];
    }
};