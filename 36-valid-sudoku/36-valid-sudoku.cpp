class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) 
    {
        vector<bitset<9>> bitsetarray(27);
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                char n=board[i][j];
                if(n!='.')
                {
                    if(bitsetarray[i][n]>0||bitsetarray[9+j][n]>0||bitsetarray[18+(3*(i/3))+(j/3)][n]>0)
                        return false;
                    bitsetarray[i][n]=true;
                    bitsetarray[9+j][n]=true;
                    bitsetarray[18+(3*(i/3))+(j/3)][n]=true;
                        
                }
            }
        }
        return true;
    }
};