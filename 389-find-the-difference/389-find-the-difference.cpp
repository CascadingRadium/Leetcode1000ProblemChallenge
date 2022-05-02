class Solution {
public:
    char findTheDifference(string s, string t) 
    {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        char ret='#';
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!=t[i])
            {
                ret=t[i];
                break;
            }
        }
        if(ret=='#')
            ret=t[s.length()];
        return ret;
    }
};