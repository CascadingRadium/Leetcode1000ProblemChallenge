class Solution {
public:
    bool isPalindrome(int x) 
    {
        string str=to_string(x);
        std::reverse(str.begin(),str.end());
        int y;
        try{
        y=stoi(str);}
        catch(const exception&e)
        {return false;}
        return y==x;
        
    }
};