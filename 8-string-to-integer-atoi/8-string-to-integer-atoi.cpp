class Solution {
public:
    int myAtoi(string s) {
        int y=0;
        string x="";
        bool signseen=false;
        bool spaceseen=false;
        for(auto i:s)
        {
            if(!spaceseen&&i==' ')
            {
                continue;
            }
            else if(!signseen&&(i=='-'||i=='+'))
            {
                spaceseen=true;
                signseen=true;
                x+=i;
            }
            else if(i>='0'&&i<='9')
            {
                x+=i;
                spaceseen=true;
            }
            else
                break;
        }
        cout<<x<<'\n';
        try{
         y= stoi(x);
        }catch(const exception &E)
        {
            if(x==""||x=="-"||x=="+")
                return 0;
            if(x[0]=='-')
                return INT_MIN;
            return INT_MAX;
        }
        return y;
        
    }
};