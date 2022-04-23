class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) 
    {
        vector<bitset<9>> hmaparray(27);
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                char n=board[i][j];
                if(n!='.')
                {
                    if(hmaparray[i][n]>0||hmaparray[9+j][n]>0||hmaparray[18+(3*(i/3))+(j/3)][n]>0)
                        return false;
                    hmaparray[i][n]=true;
                    hmaparray[9+j][n]=true;
                    hmaparray[18+(3*(i/3))+(j/3)][n]=true;
                        
                }
            }
        }

        return true;
    }
};