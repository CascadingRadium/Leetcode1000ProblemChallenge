class Solution {
public:
    char findTheDifference(string s, string t) 
    {
        unordered_map<char,int> hmap;
        for(auto i:s)
            hmap[i]++;
        for(auto i:t)
            hmap[i]--;
        char ret;
        for(auto i:hmap)
            if(i.second!=0)
            {
                ret=i.first;
                break;
            }
        return ret;
    }
};