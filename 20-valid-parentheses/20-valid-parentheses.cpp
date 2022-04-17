class Solution {
public:
    bool isValid(string s) 
    {
        stack<char> st;
        for(auto i:s)
        {
            switch(i)
            {
                case '(':
                    {
                        st.push('(');
                        break;
                    }
                case '{':
                    {
                        st.push('{');
                        break;
                    }
                case '[':
                    {
                        st.push('[');
                        break;
                    }
                case ')':
                    {
                        if(!st.empty()&&st.top()=='(')
                            st.pop();
                        else
                            return false;
                        break;
                    }
                case '}':
                    {
                        if(!st.empty()&&st.top()=='{')
                            st.pop();
                        else
                            return false;
                        break;
                    }
                case ']':
                    {
                        if(!st.empty()&&st.top()=='[')
                            st.pop();
                        else
                            return false;
                        break;
                    }
            }
        }
        if(st.empty())
            return true;
        return false;
        
    }
};