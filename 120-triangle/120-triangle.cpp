class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) 
    {
        int N = triangle.size();
        vector<int> trigRet(N);
        trigRet= triangle[N-1];
        for(int i=N-2;i>=0;i--)
        {
            vector<int> tmp(i+1);
            for(int j=0;j<i+1;j++)
            {
                tmp[j]=triangle[i][j]+min(trigRet[j],trigRet[j+1]);
            }
            trigRet.swap(tmp);
        }
        return trigRet[0];
    }
};