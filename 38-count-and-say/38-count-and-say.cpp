class Solution {
public:
    string countAndSay(int n) 
    {
            string x="1";
    while(n>1)
    {
        --n;
        string y="";
        char firstchar=x[0];
        int fcharcnt=0;
        for(auto i:x)
        {
            if(i==firstchar)
                fcharcnt++;
            else
            {
                y+=to_string(fcharcnt);
                y.push_back(firstchar);
                firstchar=i;
                fcharcnt=1;
            }
        }
        y+=to_string(fcharcnt);
        y.push_back(firstchar);
        x=y;
    }
    return x;
        
        
    }
};