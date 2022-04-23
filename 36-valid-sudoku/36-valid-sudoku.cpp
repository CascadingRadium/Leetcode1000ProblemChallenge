class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) 
    {
        vector<unordered_set<char>> hmaparray(27);
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                char n=board[i][j];
                if(n!='.')
                {
                    if(hmaparray[i].count(n)>0||hmaparray[9+j].count(n)>0||hmaparray[18+(3*(i/3))+(j/3)].count(n)>0)
                        return false;
                    hmaparray[i].insert(n);
                    hmaparray[9+j].insert(n);
                    hmaparray[18+(3*(i/3))+(j/3)].insert(n);
                        
                }
            }
        }

        return true;
    }
};