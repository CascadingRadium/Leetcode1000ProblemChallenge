class Solution {
public:
    vector<string> letterCombinations(string digits) 
    {
        vector<string> ret;
        if(digits.length()==0)
            return ret;
        unordered_map<int,string> hmap({{2,"abc"},{3,"def"},{4,"ghi"},{5,"jkl"},{6,"mno"},{7,"pqrs"},{8,"tuv"},{9,"wxyz"}});
    
    string cur="";
    int digpos=0;
    backtrck(hmap,ret,cur,digpos,digits);
    return ret;
        
    }
    
    void backtrck(unordered_map<int,string> &hmap,vector<string>&output, string &cur, int digpos,string &digits)
{
    if(cur.length()==digits.length())
    {
        output.push_back(cur);
        digpos=0;
    }
    else
    {
        string h=hmap[digits[digpos]-'0'];
        digpos++;
        for(auto i:h)
        {
            cur.push_back(i);
            backtrck(hmap,output,cur,digpos,digits);
            cur.pop_back();
        }
    }
}
};