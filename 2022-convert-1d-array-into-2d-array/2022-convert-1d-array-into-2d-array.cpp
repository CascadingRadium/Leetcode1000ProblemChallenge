class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) 
    {
        vector<vector<int>> ret(m,vector<int>(n));
        if(m*n!=original.size())
            return {};
        int currow=-1;
        for(int i=0;i<original.size();i++)
        {
            if(i%n==0)
                currow++;
            ret[currow][i%n]=original[i];
        }
        return ret;
   }
};