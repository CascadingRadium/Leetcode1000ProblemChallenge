class Solution {
public:
    vector<vector<int>> generate(int numRows) 
    {
        vector<vector<int>> triangle(numRows);
        triangle[0]={1};
        for(int i=1;i<numRows;i++)
        {
            vector<int> row(i+1);
            row[0]=1;
            row.back()=1;
            for(int j=1;j<row.size()-1;j++)
            {
                row[j]=triangle[i-1][j-1]+triangle[i-1][j];
            }
            triangle[i]=row;
        }
        return triangle;   
    }
};