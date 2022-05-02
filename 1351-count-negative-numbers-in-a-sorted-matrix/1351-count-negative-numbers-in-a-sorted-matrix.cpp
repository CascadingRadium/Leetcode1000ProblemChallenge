class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) 
    {
        int m=grid.size();
        int n=grid[0].size();
        int ret=0;
        for(int i=0;i<m;i++)
        {   
            int l=0,r=n-1;
            while(r-l>1)
            {
                int mid=l+(r-l)/2;
                if(grid[i][mid]<0)
                    r=mid;
                else
                    l=mid;
            }
            if(grid[i][l]<0)
                ret+=n-l;
            else if(grid[i][r]<0)
                ret+=n-r;
        }
        return ret;
        
    }
};