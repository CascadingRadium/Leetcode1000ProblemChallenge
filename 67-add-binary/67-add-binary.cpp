class Solution {
public:
    string addBinary(string a1, string b1) 
    {
        string x="";
        int l1=a1.length();
        int l2=b1.length();
        bool carry=0;
        int maxl=max(l1,l2);
        reverse(a1.begin(),a1.end());
        reverse(b1.begin(),b1.end());
        for(int i=0;i<maxl;i++)
        {
            int a=0;
            int b=0;
            if(i<l1)
                a=a1[i]-'0';
            if(i<l2)
                b=b1[i]-'0';
            char res='0'+a+b+carry;
            if(res=='3')
            {
                x+="1";
                carry=1;
            }
            else if(res=='2')
            { 
                x+="0";
                carry=1;
            }
            else
            {
                x+=(res);
                carry=0;
            }
        }
        if(carry)
            x+='0'+carry;
        reverse(x.begin(),x.end());
        return x;
        
    }
};