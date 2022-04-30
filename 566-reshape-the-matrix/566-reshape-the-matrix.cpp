class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) 
    {
        vector<vector<int>> ret(r,vector<int>(c));
        int n=mat.size();
        int m=mat[0].size();
        if(r*c!=m*n)
            return mat;
        int currow=-1,curcol=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(curcol%c==0)
                    currow+=1;
                ret[currow][curcol%c]=mat[i][j];
                curcol++;
            }
        }
        return ret;
        
        
    }
};