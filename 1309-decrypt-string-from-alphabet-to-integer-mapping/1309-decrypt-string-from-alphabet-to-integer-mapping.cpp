class Solution {
public:
    string freqAlphabets(string s) 
    {
        unordered_map<string,char> hmap;
        for(int i=0;i<10;i++)
            hmap[to_string(i+1)]='a'+i;
        for(int i=10;i<27;i++)
            hmap[to_string(i)+"#"]='a'+(i-1);
        string ret="";
        int i=0;
        for(i=0;i<s.length()-2;i++)
        {
            if(s[i+2]=='#')
            {
                ret.push_back(hmap[s.substr(i,3)]);
                i+=2;
                
            }
            else
                ret.push_back(hmap[string(1,s[i])]);
        }
        if(i!=s.length())
            ret.push_back(hmap[string(1,s[i++])]);
        if(i!=s.length())
            ret.push_back(hmap[string(1,s[i])]);
        return ret;
    }
};