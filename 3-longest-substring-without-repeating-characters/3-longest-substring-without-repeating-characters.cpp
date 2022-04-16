class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        unordered_map<char,pair<bool,int>> seen;
        int ret=0;
        for(int i=0;i<s.length();i++)
        {
           auto x=seen[s[i]]; 
           if(x.first)
            {
                ret=max((int)seen.size(),ret);
                seen.clear();
                i=x.second+1;
            }
            seen[s[i]].first=true;
            seen[s[i]].second=i;
        }
        return max(ret,(int)seen.size());
        
    }
};