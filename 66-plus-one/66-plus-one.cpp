class Solution {
public:
    vector<int> plusOne(vector<int>& digits) 
    {
        int n=digits.size();
        bool carry=0;
        int sum=digits[n-1]+1;
        digits[n-1]=(sum)%10;
        carry=sum/10;
        for(int i=n-2;i>=0;i--)
        {
            if(!carry)
                break;
            int sum=digits[i]+carry;
            digits[i]=sum%10;
            carry=sum/10;
        }
        if(carry)
            digits.insert(digits.begin(),1);
        return digits;
        
    }
};