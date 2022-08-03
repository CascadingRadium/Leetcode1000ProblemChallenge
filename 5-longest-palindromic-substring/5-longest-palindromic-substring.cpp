class Solution{
public:
    string longestPalindrome(string s) 
    {
        int n=s.length();
        vector<vector<int>> table(n,vector<int>(n,0));
        for(int i=0;i<n;i++)
        {
            table[i][i]=1;
        }
        pair<int,int> range;
        int maxLen=1;
        for(int i=0;i<n-1;i++)
        {
            if(s[i]==s[i+1])
            {
                table[i][i+1]=2;
                maxLen=2;
                range={i,i+1};
            }
        }
        for(int i=2;i<n;i++)
        {
            for(int j=0;j<n-i;j++)
            {
                int rowIndex=j;
                int colIndex=i+j;
                if(s[rowIndex]==s[colIndex] && table[rowIndex+1][colIndex-1]>0)
                {
                   table[rowIndex][colIndex]=table[rowIndex+1][colIndex-1]+2;
                   if(table[rowIndex][colIndex]>maxLen)
                   {
                       maxLen=table[rowIndex][colIndex];
                        range={rowIndex,colIndex};
                   }
                }
            }
            
        }
        return s.substr(range.first,range.second-range.first+1);
    }
};