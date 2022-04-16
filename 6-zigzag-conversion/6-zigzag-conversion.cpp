class Solution {
public:
    string convert(string s, int numRows) 
    {
        int n=s.length();
        int numcol=0;
        if(s.length()>numRows&&numRows!=1)
            numcol=ceil((s.length()-numRows)/(float)(numRows-1))+1;
        else
            numcol=ceil((float)(s.length())/numRows);
        vector<vector<char>> matrix(numRows,vector<char>(numcol));
        int row=0;
        int col=0;
        bool down=true;
        for(auto i:s)
        {
            if(row<0)
            {
                if(numRows-2>=0)
                    row=1;
                else
                    row=0;
                col+=1;
                down=true;
            }
            else if(row==numRows)
            {
                col+=1;
                if(numRows-2>=0)
                    row=numRows-2;
                else
                    row=0;
                down=false;
            }
                matrix[row][col]=i;
                if(down)
                    row++;
                else
                    row--;
        }
        string ret="";
        for(auto i:matrix)
        {
            for(auto j:i)
            {
                if(j!='\0')
                    ret+=j;
            }
        }
        return ret;
    }
};