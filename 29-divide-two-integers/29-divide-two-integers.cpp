class Solution {
public:
    int divide(int dividend, int divisor) 
    {
        return dividend == -2147483648 && divisor==-1? 2147483647: dividend/divisor;
    }
};