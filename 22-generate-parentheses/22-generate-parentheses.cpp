class Solution {
public:
    void backtrck(int n, string cur,vector<string>& strlist, stack<char> st)
    {
        if(n==0)
        {
            string x=cur;
            for(int i=0;i<st.size();i++)
                x+=")";
            strlist.push_back(x);
        }
        else
        {
            if(!st.empty())
            {
                cur.push_back('(');
                st.push('(');
                backtrck(n-1,cur,strlist,st);
                cur.pop_back();
                st.pop();
                cur.push_back(')');
                st.pop();
                backtrck(n,cur,strlist,st);
            }
            else
            {                
                cur.push_back('(');
                st.push('(');
                backtrck(n-1,cur,strlist,st);
            }
                
        }
    }
    
    vector<string> generateParenthesis(int n) 
    {
        vector<string>strlist;
        stack<char>st;
        backtrck(n,"",strlist,st);
        return strlist;
    }
};