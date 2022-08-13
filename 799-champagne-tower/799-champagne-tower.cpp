class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) 
    {
        vector<vector<double>> tower;
        tower.push_back({(double)poured-1});
        for(int i=1;i<=query_row;i++)
        {
            vector<double> temp(i+1);
            temp[0]=(max(0.0,tower[i-1][0])/2)-1;
            temp[i]=(max(0.0,tower[i-1][i-1])/2)-1;
            for(int j=1;j<i;j++)
            {
                temp[j]=((max(0.0,tower[i-1][j])/2)+(max(0.0,tower[i-1][j-1])/2))-1;
            }
            tower.push_back(temp);
        }
        if(tower[query_row][query_glass]>0)
            return 1;
        else if(tower[query_row][query_glass]>-1)
            return 1+tower[query_row][query_glass];
        else
            return 0;
        
    }
};