class Solution {
public:
    int getsqr(int n)
    {
        int ret=0;
        while(n>0)
        {
            ret+=(n%10)*(n%10);
            n/=10;
        }
        return ret;
    }
    bool isHappy(int n) 
    {
        unordered_set<int> set;
        while(n!=1&&!set.count(n))
        {
            set.insert(n);
            n=getsqr(n);
        }
        if(n==1)
            return true;
        return false;
    }
};