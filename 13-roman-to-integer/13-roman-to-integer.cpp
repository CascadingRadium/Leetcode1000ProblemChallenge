class Solution {
public:
    int romanToInt(string s) 
    {
        int x=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='M')
                x+=1000;
            if(i+1<s.length()&&s[i]=='C'&&s[i+1]=='M')
            {
                x+=900;
                i+=1;
                continue;
            }
            if(s[i]=='D')
                x+=500;
            if(i+1<s.length()&&s[i]=='C'&&s[i+1]=='D')
            {
                x+=400;
                i+=1;
                continue;
            }
            if(s[i]=='C')
                x+=100;
            if(s[i]=='L')
                x+=50;
            if(i+1<s.length()&&s[i]=='X'&&s[i+1]=='C')
            {
                x+=90;
                i+=1;
                continue;
            }
            if(i+1<s.length()&&s[i]=='X'&&s[i+1]=='L')
            {
                x+=40;
                i+=1;
                continue;
            }
            if(s[i]=='X')
                x+=10;
            if(s[i]=='V')
                x+=5;
            if(i+1<s.length()&&s[i]=='I'&&s[i+1]=='X')
            {
                x+=9;
                i+=1;
                continue;
            }
            if(i+1<s.length()&&s[i]=='I'&&s[i+1]=='V')
            {
                x+=4;
                i+=1;
                continue;
            }
            if(s[i]=='I')
                x+=1;
        }
        return x;
        
    }
};