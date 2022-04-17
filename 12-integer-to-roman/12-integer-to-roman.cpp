class Solution {
public:
    string intToRoman(int num)
    {
        string x="";
        while(num/1000>0)
        {
            num=num-1000;
            x+="M";
        }
        if(num/900>0)
        {
            num=num%900;
            x+="CM";
        }
        if(num/500>0)
        {
            num=num%500;
            x+="D";
        }
        if(num/400>0)
        {
            num=num%400;
            x+="CD";
        }
        while(num/100>0)
        {
            num=num-100;
            x+="C";
        }
        if(num/90>0)
        {
            num=num%90;
            x+="XC";
        }
        if(num/50>0)
        {
            num=num%50;
            x+="L";
        }
        if(num/40>0)
        {
            num=num%40;
            x+="XL";
        }
        while(num/10>0)
        {
            x+="X";
            num=num-10;
        }
        if(num/9>0)
        {
            num=num%9;
            x+="IX";
        }
        if(num/5>0)
        {
            num=num%5;
            x+="V";
        }
        if(num/4>0)
        {
            num=num%4;
            x+="IV";
        }
        for(int i=0;i<num;i++)
        {
            x+="I";
        }
        return x;
    }
};