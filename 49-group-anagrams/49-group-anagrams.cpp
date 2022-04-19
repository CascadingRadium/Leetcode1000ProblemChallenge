class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        vector<unordered_map<char,int>> hmaps;
        int n=strs.size();
        bool anagram=true;
        vector<vector<string>> ret;
        vector<bool> visited(n);
        for(int i=0;i<n;i++)
        {
            unordered_map<char,int> h;
            for(auto j:strs[i])
                h[j]++;
            hmaps.push_back(h);
        }
        for(int i=0;i<n-1;i++)
        {
            if(visited[i])
                continue;
            vector<string> temparr;
            temparr.push_back(strs[i]);
            for(int j=i+1;j<n;j++)
            {
               if(hmaps[j]==hmaps[i])
               {
                   visited[j]=true;
                   temparr.push_back(strs[j]);
               }
            }
            ret.push_back(temparr);
        }
        if(!visited[n-1])
            ret.push_back(vector<string>{strs[n-1]});
        return ret;
    }
};