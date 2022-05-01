class Solution {
public:
    int firstUniqChar(string s) 
    {
        unordered_map<char,pair<int,int>> hmap;
        for(int i=0;i<s.length();i++)
        {
            if(hmap.count(s[i]))
                hmap[s[i]].second++;
            else
                hmap[s[i]]=make_pair(i,1);
        }
        vector<pair<char,pair<int,int>>> vc(hmap.begin(),hmap.end());
        sort(vc.begin(),vc.end(),[](const auto &a,const auto &b){return a.second.first<b.second.first;});
        for(auto i:vc)
        {
            if(i.second.second==1)
                return i.second.first;
        }
        return -1;
        
    }
};