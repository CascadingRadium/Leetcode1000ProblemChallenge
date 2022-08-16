class Solution {
public:
    int countSegments(string s) {
        auto l=s.begin();
        auto r=s.end()-1;
        while(l!=s.end()&&*l==' ')
            l++;
        if(l==s.end())
            return 0;
        while(*r==' ')
            r--;
        int po=0;
        while(l!=r+1)
        {
            if(*l==' ')
            {
                po+=1;
                auto j=l+1;
                while(*j==' ')
                    j++;
                l=j;
            }
            else
                l++;
        }
        return po+1;
    }
};