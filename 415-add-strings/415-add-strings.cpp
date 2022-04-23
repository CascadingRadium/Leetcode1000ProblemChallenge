class Solution {
public:
    string addStrings(string num1, string num2) 
    {
        int maxl=max(num1.length(),num2.length());
        int l1=num1.length();
        int l2=num2.length();
        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());
        bool carry=0;
        string x="";
        for(int i=0;i<maxl;i++)
        {
            int a=0,b=0;
            if(i<l1)
                a=(num1[i]-'0');
            if(i<l2)
                b=(num2[i]-'0');
            int y=a+b+carry;
            x+=('0'+(y%10));
            carry=y/10;
        }
        if(carry)
            x+="1";
        reverse(x.begin(),x.end());
        return x;
        
    }
};