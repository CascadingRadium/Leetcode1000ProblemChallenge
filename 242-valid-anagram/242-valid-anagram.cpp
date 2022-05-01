class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        unordered_map<char,int> hmap;
        for(auto i:s)
            hmap[i]++;
        for(auto i:t)
            hmap[i]--;
        for(auto i:hmap)
            if(i.second!=0)
                return false;
        return true;
        
    }
};