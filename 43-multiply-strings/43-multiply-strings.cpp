class Solution {
public:
    string multiply(string num1, string num2) 
    {
    bool nega=false;
    if(num1[0]=='-')
    {
        nega=true;
        num1.begin()=num1.erase(num1.begin());
    }
    if(num2[0]=='-')
    {
        nega=!nega;
        num2.begin()=num2.erase(num2.begin());
    }
    int maxl=max(num1.length(),num2.length());
        if(num1.length()==maxl)
        {
            int l=maxl-num2.length();
            for(int i=0;i<l;i++)
                num2="0"+num2;
        }
        else
        {
            int l=maxl-num1.length();
            for(int i=0;i<l;i++)
                num1="0"+num1;
        }
        int mult=0;
        int carry=0;
        vector<vector<int>> matrix(maxl,vector<int>(2*maxl));
        int row=0,col=(2*maxl)-1,initcol=col;
        for(int i=maxl-1;i>=0;i--)
        {
            for(int j=maxl-1;j>=0;j--)
            {
                int x=(num1[j]-'0')*(num2[i]-'0')+carry;
                matrix[row][col]=x%10;
                carry=x/10;
                col--;
            }
            matrix[row][col]=carry;
            row++;
            col=initcol-1;
            initcol=col;
            carry=0;
        }
        carry=0;
        string ret="";
        for(int i=2*maxl-1;i>=0;i--)
        {
            mult=0;
            mult+=carry;
            for(int j=0;j<maxl;j++)
            {
                mult+=matrix[j][i];
            }
            ret=to_string(mult%10)+ret;
            carry=mult/10;
        }
        while(ret[0]=='0')
            ret.begin()=ret.erase(ret.begin());
        if(ret=="")
            return "0";
        if(carry)
            ret= "1"+ret;
        if(nega)
            ret="-"+ret;
        return ret;
        
    }
};