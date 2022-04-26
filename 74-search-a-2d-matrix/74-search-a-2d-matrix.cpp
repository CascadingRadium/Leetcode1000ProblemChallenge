class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        int n=matrix[0].size();
        int l=0,r=(matrix.size()*n)-1;
        while(r-l>1)
        {
            int mid=(l+(r-l)/2);
            if(matrix[mid/n][mid%n]<target)
                l=mid;
            else
                r=mid;
        }
        if(matrix[l/n][l%n]==target||matrix[r/n][r%n]==target)
            return true;
        return false;
        
    }
};