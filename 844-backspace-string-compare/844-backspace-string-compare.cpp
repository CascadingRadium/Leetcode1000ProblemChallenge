class Solution {
public:
    string getRealString(string s)
    {
        string ret="";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='#')
            {
                if(ret.size()>0)
                    ret.pop_back();
            }
            else
                ret.push_back(s[i]);
        }
        return ret;
    }
    bool backspaceCompare(string s, string t) 
    {
        return getRealString(s)==getRealString(t);
        
    }
};