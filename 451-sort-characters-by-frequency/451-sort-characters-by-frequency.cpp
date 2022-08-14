class Solution {
public:
    string frequencySort(string s) 
    {
        unordered_map<char,int> hmap;
        for(auto chr:s)
            hmap[chr]++;
        sort(s.begin(),s.end(),[&hmap](char &a, char &b){
            if(hmap[a]==hmap[b])
                return a>b;
            return hmap[a]>hmap[b];
        });
        return s;
        
        
    }
};