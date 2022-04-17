class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        string x;
        int i=0;
        for(int k=0;k<strs.size();k++)
        {
            if(strs[k].length()<strs[i].length())
                i=k;
        }
        x=strs[i];
        for(int i=0;i<strs.size();i++)
        {
            int index=0;
            while(index<x.size())
            {
                if(strs[i][index]!=x[index])
                {
                    x=strs[i].substr(0,index);
                    break;
                }
                index++;
            }
            if(index==0)
                return "";
        }
        return x;
        
    }
};