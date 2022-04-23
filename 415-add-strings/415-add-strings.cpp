class Solution {
public:
    string addStrings(string num1, string num2) 
    {
        int maxl=max(num1.length(),num2.length());
        int l1=num1.length();
        int l2=num2.length();
        if(l1<maxl)
        {
            for(int i=0;i<maxl-l1;i++)
                num1='0'+num1;
        }
        else
        {
            for(int i=0;i<maxl-l2;i++)
                num2='0'+num2;
        }
        bool carry=0;
        string x="";
        for(int i=maxl-1;i>=0;i--)
        {
            int y=((num1[i]-'0')+(num2[i]-'0'))+carry;
            x=(to_string(y%10))+x;
            carry=y/10;
        }
        if(carry)
            x="1"+x;
        return x;
        
    }
};