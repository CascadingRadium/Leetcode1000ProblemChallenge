class Solution {
public:
    int strStr(string haystack, string needle) 
    {
        int n=needle.length();
        if(haystack.length()<n)
            return -1;
        for(int i=0;i<=haystack.length()-n;i++)
        {
            string x=haystack.substr(i,n);
            if(x==needle)
                return i;
        }
        return -1;
        
    }
};