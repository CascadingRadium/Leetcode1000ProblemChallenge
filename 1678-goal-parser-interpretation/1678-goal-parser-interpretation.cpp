class Solution {
public:
    string interpret(string command) 
    {
        string ret="";
        for(int i=0;i<command.length();i++)
        {
            if(command[i]=='('&&command[i+1]==')')
            {
                ret.push_back('o');
                i+=1;
            }
            else if(command[i]=='G')
                ret.push_back('G');
            else
            {
                ret+="al";
                i+=3;
            }
        }
        return ret;
        
    }
};