class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) 
    {
        unordered_map<char,int> hmap;
        for(auto i:magazine)
            hmap[i]++;
        for(auto i:ransomNote)
        {
            if(hmap[i]>0)
                hmap[i]--;
            else
                return false;
        }
        return true;
    }
};