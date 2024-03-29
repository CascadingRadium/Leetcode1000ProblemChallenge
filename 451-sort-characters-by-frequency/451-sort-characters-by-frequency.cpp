class Solution {
public:
    string frequencySort(string s) 
    {
        unordered_map<char,int> hmap;
        for(auto chr:s)
            hmap[chr]++;
        s="";
        vector<pair<char,int>> hm(hmap.begin(),hmap.end());
        sort(hm.begin(),hm.end(),[](auto a, auto b){return a.second>b.second;});
        for(auto i:hm)
        {
            for(int j=0;j<i.second;j++)
                s.push_back(i.first);
        }
        return s;
        
        
    }
};