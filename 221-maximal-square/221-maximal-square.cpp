class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) 
    {
        int maxVal=0;
        vector<vector<int>> table(matrix.size(),vector<int>(matrix[0].size()));
        for(int i=0;i<matrix.size();i++)
        {
            table[i][0]=matrix[i][0]-'0';
            if(table[i][0]==1)
                maxVal=1;
        }
        for(int i=0;i<matrix[0].size();i++)
        {
            table[0][i]=matrix[0][i]-'0';
            if(table[0][i]==1)
                maxVal=1;
        }

        for(int i=1;i<matrix.size();i++)
        {
            for(int j=1;j<matrix[0].size();j++)
            { 
                if(matrix[i][j]!='0')
                {
                    table[i][j]=min({table[i-1][j-1],table[i-1][j],table[i][j-1]})+1;
                    maxVal=max(maxVal,table[i][j]);
                }
            }
        }
        return maxVal*maxVal;
    }
};