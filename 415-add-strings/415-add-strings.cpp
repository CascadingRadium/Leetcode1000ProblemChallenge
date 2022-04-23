class Solution {
public:
    string addStrings(string num1, string num2) 
    {
        int maxl=max(num1.length(),num2.length());
        int l1=num1.length();
        int l2=num2.length();
        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());
        if(l1<maxl)
        {
            for(int i=0;i<maxl-l1;i++)
                num1+='0';
        }
        else
        {
            for(int i=0;i<maxl-l2;i++)
                num2+='0';
        }
        bool carry=0;
        string x="";
        for(int i=0;i<maxl;i++)
        {
            int y=((num1[i]-'0')+(num2[i]-'0'))+carry;
            x+=(to_string(y%10));
            carry=y/10;
        }
        if(carry)
            x+="1";
        reverse(x.begin(),x.end());
        return x;
        
    }
};