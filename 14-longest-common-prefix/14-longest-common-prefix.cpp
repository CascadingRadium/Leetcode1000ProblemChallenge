class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        sort(strs.begin(),strs.end(),[](auto a,auto b){return a.length()<b.length();});
        string x=strs[0];
        for(int i=1;i<strs.size();i++)
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